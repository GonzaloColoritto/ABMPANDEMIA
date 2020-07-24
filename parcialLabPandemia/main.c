#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "menu.h"
#include "ll_list.h"
#include "Controller.h"
#include "informes.h"
int main()
{
    char seguir = 's';
    char confirmacion;

//    LinkedList* listaBicicletas = ll_newLinkedList();
LinkedList* listaPaises = ll_newLinkedList();
LinkedList* listaPaisesExitosos=NULL;
LinkedList* listaPaisesEnLaB=NULL;

    do
    {
        switch(menuInicio())
        {
        case 1:

             if(controller_loadFromText("pandemia.csv",listaPaises)==0)
            {
                printf("Datos Cargados con exito\n");

            }
            else
            {

                printf("Error en la carga de datos\n");

            }

            break;

        case 2:
             if(!controller_ListPais(listaPaises))
            {

                printf("Listadas con exito\n");
            }
            else
            {
                printf("Error al listar\n");
            }

            break;

        case 3:
             listaPaises=ll_map(listaPaises,setearRecuperados);
             listaPaises=ll_map(listaPaises,setearInfectados);
             listaPaises=ll_map(listaPaises,setearMuertos);
            if(!controller_ListPais(listaPaises))
            {

                printf("Listadas con exito\n");
            }
            else
            {
                printf("Error al listar\n");
            }

            break;

        case 4:
            listaPaisesExitosos=ll_newLinkedList();
             listaPaisesExitosos=ll_filter(listaPaises,filtrarPorMuertos);
                if(!controller_ListPais(listaPaisesExitosos))
                {
                    controller_saveAsText("paisesExitosos.csv",listaPaisesExitosos);
                    printf("Filtrados y guardadas con exito en 'paisesExitosos.csv' \n");
                }
                else
                {
                    printf("Error al filtrar\n");
                }

            break;

        case 5:
            listaPaisesEnLaB=ll_newLinkedList();
             listaPaisesEnLaB=ll_filter(listaPaises,filtrarPorEnLaB);
                if(!controller_ListPais(listaPaisesEnLaB))
                {
                    controller_saveAsText("paisesEnLaB.csv",listaPaisesEnLaB);
                    printf("Filtrados y guardadas con exito en 'paisesEnLaB.csv' \n");
                }
                else
                {
                    printf("Error al filtrar\n");
                }
            break;

        case 6:
            if(ll_sort(listaPaises,ordenarPorInfectados,1)==0){

               if(!controller_ListPais(listaPaises)){

                    printf("Orden mostrado de forma descendente\n");
                }else{
                printf("Error al listar en orden\n");
                }

               }


            break;

        case 7:

            ll_buscarMasAlto(listaPaises);

            break;

        case 8:

            printf(" ¿Desea salir? S/N: ");
            fflush(stdin);
            scanf("%c",&confirmacion);

            confirmacion=tolower(confirmacion);

            if(confirmacion=='s')
            {
                seguir = 'n';
            }
            break;

        }
        system("pause");
    }
    while(seguir=='s');
}

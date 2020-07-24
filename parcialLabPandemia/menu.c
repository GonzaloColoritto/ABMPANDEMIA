#include <stdio.h>
#include <stdlib.h>
int menuInicio(){
int opcion;

system("cls");
printf("PANDEMIA COVID-19\n\n");
printf("1-CARGAR ARCHIVO\n");
printf("2-IMPRIMIR LISTA DE PAISES\n");
printf("3-ASIGNAR ESTADISTICAS\n");
printf("4-FILTRAR PAISES EXITOSOS\n");
printf("5-PAISES EN LA B\n");
printf("6-ORDENAR POR NIVEL DE INFECCION\n");
printf("7-PAIS CON MAS MUERTOS\n");
printf("8-SALIR\n");


printf("Ingrese una opcion:");
scanf("%d",&opcion);



return opcion;
}

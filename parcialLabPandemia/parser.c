#include <stdio.h>
#include <stdlib.h>
#include "ll_list.h"
#include "pais.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_FromText(FILE *pFile, LinkedList *pArrayList) {

	ePais* pais;

	char id[20];
	char nombre[20];
	char recuperados[20];
	char infectados[20];
	char muertos[20];

	int todoOk = 0;
	int flag = 1;

	if (pFile != NULL) {
		while (!feof(pFile)) {
			if (flag) {
				fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,recuperados,infectados,muertos);

				flag = 0;
			}
			fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,recuperados,infectados,muertos);

			//bicicleta = bicicleta_newParametros(id,nombre,recuperados,infectados,muertos);

            pais=pais_newParametros(id,nombre,recuperados,infectados,muertos);

			if (pais != NULL) {
				ll_add(pArrayList,pais);
				todoOk = 1;
			}
		}
	}
	return todoOk;
}



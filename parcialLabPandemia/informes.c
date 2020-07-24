
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pais.h"
int getRamdomRecuperados(void){
int retorno;

retorno=rand()%970001+30000;

return retorno;
}
int getRamdomInfectados(void){
int retorno;

retorno=rand()%1100001+90000;

return retorno;
}
int getRamdomMuertos(void){
int retorno;

retorno=rand()%(1000+49001);

return retorno;
}


void* setearRecuperados(void* pais){

    ePais* auxPais;

    if(pais!=NULL){
        auxPais = (ePais*) pais;
       pais_setRecuperados(auxPais,getRamdomRecuperados());

    }
return auxPais;
}
void* setearInfectados(void* pais){

    ePais* auxPais;

    if(pais!=NULL){
        auxPais = (ePais*) pais;
       pais_setInfectados(auxPais,getRamdomInfectados());

    }
return auxPais;
}
void* setearMuertos(void* pais){

    ePais* auxPais;

    if(pais!=NULL){
        auxPais = (ePais*) pais;
       pais_setMuertos(auxPais,getRamdomMuertos());

    }
return auxPais;
}
int filtrarPorMuertos(void* pais){

int retorno=0;
    ePais* auxPais;

    if(pais!=NULL){
        auxPais = (ePais*) pais;
        if(auxPais->muertos<5000){
            retorno=1;
        }
    }
return retorno;
}

int filtrarPorEnLaB(void* pais){

int retorno=0;
    ePais* auxPais;

    if(pais!=NULL){
        auxPais = (ePais*) pais;
        if(auxPais->infectados>(auxPais->recuperados)*3){
            retorno=1;
        }
    }
return retorno;
}

int ordenarPorInfectados(void* infectados1, void* infectados2){


int infectados_1;
int infectados_2;
int retorno = 0 ; // si los tiempos son iguales, devuelve 0

pais_getInfectados(infectados1, &infectados_1);
pais_getInfectados(infectados2,&infectados_2);

if (infectados_1> infectados_2) {
	retorno = 1 ;
} else  if (infectados_1 < infectados_2) {
	retorno = -1 ;
	}
	return retorno;
}






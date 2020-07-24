#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pais.h"
#include <string.h>

ePais* pais_newParametros(char* idStr,char* nombreStr,char* recuperadosStr, char* infectadosStr,char* muertosStr){


    ePais* auxPais = NULL;

    auxPais = pais_new();
    int id=atoi(idStr);
    int recuperados=atoi(recuperadosStr);
    int infectados=atoi(infectadosStr);
    int muertos=atoi(muertosStr);



    if(auxPais!=NULL)
    {
        pais_setId(auxPais,id);
        pais_setNombre(auxPais,nombreStr);
        pais_setRecuperados(auxPais,recuperados);
        pais_setInfectados(auxPais,infectados);
        pais_setMuertos(auxPais,muertos);
    }
    return auxPais;
}

ePais* pais_new(){

    return (ePais*)malloc(sizeof(ePais));
}
int pais_setId(ePais* this,int id)
{

    int retorno = -1;
	if(this != NULL && id > 0)
	{

	    this->id = id;

		retorno = 0;

	}
	return retorno;

}

int pais_setNombre(ePais* this,char* nombre)
{
    int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		retorno = 0;
		strcpy(this->nombre,nombre);
	}
	return retorno;

}

int pais_setRecuperados(ePais* this,int recuperados)
{
    int retorno = -1;
	if(this != NULL && recuperados>=0)
	{
		retorno = 0;
		this->recuperados=recuperados;
	}
	return retorno;

}
int pais_setInfectados(ePais* this,int infectados)
{
    int retorno = -1;
	if(this != NULL && infectados >= 0)
	{

	    this->infectados = infectados;

		retorno = 0;

	}
	return retorno;
}

int pais_setMuertos(ePais* this,int muertos)
{
    int retorno = -1;
	if(this != NULL && muertos>=0)
	{
		retorno = 0;
		this->muertos=muertos;
	}
	return retorno;

}

int pais_getId(ePais* this,int* id)
{
    int retorno = -1;
	if(this != NULL && id != NULL)
	{

	    *id = this->id;

		retorno = 0;

	}
	return retorno;

}

int pais_getNombre(ePais* this,char* nombre)
{
    int retorno = -1;
	if(this != NULL && nombre != NULL)
	{
		retorno = 0;
		strcpy(nombre,this->nombre);
	}
	return retorno;

}



int pais_getRecuperados(ePais* this,int* recuperados)
{

 int retorno = -1;
	if(this != NULL && recuperados >= 0)
	{

	    *recuperados = this->recuperados;

		retorno = 0;

	}
	return retorno;

}


int pais_getInfectados(ePais* this,int* infectados)
{

 int retorno = -1;
	if(this != NULL && infectados >= 0)
	{

	    *infectados = this->infectados;

		retorno = 0;

	}
	return retorno;

}

int pais_getMuertos(ePais* this,int* muertos)
{

 int retorno = -1;
	if(this != NULL && muertos >= 0)
	{

	    *muertos = this->muertos;

		retorno = 0;

	}
	return retorno;

}

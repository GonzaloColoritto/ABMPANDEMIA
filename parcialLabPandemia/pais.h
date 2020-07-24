#ifndef PAIS_H_INCLUDED
#define PAIS_H_INCLUDED

typedef struct{

int id;
char nombre[20];
int recuperados;
int infectados;
int muertos;

}ePais;
ePais* pais_newParametros(char* idStr,char* nombreStr,char* recuperadosStr, char* infectadosStr,char* muertosStr);
ePais* pais_new();
int pais_setId(ePais* this,int id);
int pais_setNombre(ePais* this,char* nombre);
int pais_setRecuperados(ePais* this,int recuperados);
int pais_setInfectados(ePais* this,int infectados);
int pais_setMuertos(ePais* this,int muertos);
int pais_getId(ePais* this,int* id);
int pais_getNombre(ePais* this,char* nombre);
int pais_getRecuperados(ePais* this,int* recuperados);
int pais_getInfectados(ePais* this,int* infectados);
int pais_getMuertos(ePais* this,int* muertos);

#endif // PAIS_H_INCLUDED

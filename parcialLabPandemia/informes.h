#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED

void* setearRecuperados(void* pais);
int getRamdomRecuperados(void);
void* setearInfectados(void* pais);
void* setearMuertos(void* pais);
int getRamdomInfectados(void);
int getRamdomMuertos(void);
int filtrarPorMuertos(void* pais);
int filtrarPorEnLaB(void* pais);
int ordenarPorInfectados(void* infectados1, void* infectados2);
#endif // INFORMES_H_INCLUDED

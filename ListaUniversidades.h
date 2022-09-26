#ifndef _LISTAUNIVERSIDADES_H_
#define _LISTAUNIVERSIDADES_H_
#include "ElementoUniversidade.h"

class ListaUniversidades{
private:
    ElementoUniversidade* pPrimeiro;
    ElementoUniversidade* pAtual;
public:
    ListaUniversidades();
    ~ListaUniversidades();

void inserirUni(Universidade* Uni);
Universidade* localizarUni(char* name);
void Liste();
void LimpaLista();
void retirarUni(char* name);
void GravarUnis();

};

#endif
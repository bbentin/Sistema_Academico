#ifndef _LISTADEPARTAMENTOS_H_
#define _LISTADEPARTAMENTOS_H_
#include "ElementoDepartamento.h"

class ListaDepartamentos{
private:
    ElementoDepartamento* pPrimeiro;
    ElementoDepartamento* pAtual;
    Universidade* Associada;
    int qtdDptos;

public:

    ListaDepartamentos();
    ListaDepartamentos(Universidade* asso);
    ~ListaDepartamentos();

void addDpto(Departamento* inserido);
void setUni(Universidade* assoc);
void Liste();
void GraveDepartamentos();
void LimpaLista();
Departamento* LocalizarDpto(const char* nome);
Universidade* getUni();
ElementoDepartamento* getPrimeiro();
ElementoDepartamento* getUltimo();
};

#endif
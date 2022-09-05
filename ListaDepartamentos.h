#ifndef _LISTADEPARTAMENTOS_H_
#define _LISTADEPARTAMENTOS_H_
#include "ObjDepartamento.h"

class ListaDepartamentos{
private:
    ObjDepartamento* pPrimeiro;
    ObjDepartamento* pAtual;
    Universidade* Associada;
    int qtdDptos;

public:

    ListaDepartamentos();
    ListaDepartamentos(Universidade* asso);
    ~ListaDepartamentos();

void addDpto(Departamento* inserido);
void setUni(Universidade* assoc);
Universidade* getUni();
ObjDepartamento* getPrimeiro();
ObjDepartamento* getUltimo();
void Liste();
};

#endif
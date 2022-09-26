#ifndef _ELEMENTODEPARTAMENTO_H_
#define _ELEMENTODEPARTAMENTO_H_
#include "Departamento.h"

class ElementoDepartamento{
private:
    Departamento* Associado;
    ElementoDepartamento* pProx;
    ElementoDepartamento* pAnte;
public:

ElementoDepartamento();
ElementoDepartamento(Departamento* Dpto);
~ElementoDepartamento();

void setProx(ElementoDepartamento* prox);
void setAnte(ElementoDepartamento* ante);
void setDepartamento(Departamento* asso);
Departamento* getAsso();
ElementoDepartamento* getProx();
ElementoDepartamento* getAnte();

};

#endif
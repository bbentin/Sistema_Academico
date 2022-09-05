#ifndef _OBJDEPARTAMENTO_H_
#define _OBJDEPARTAMENTO_H_
#include "Departamento.h"

class ObjDepartamento{
private:
    Departamento* Associado;
    ObjDepartamento* pProx;
    ObjDepartamento* pAnte;
public:

ObjDepartamento();
ObjDepartamento(Departamento* Dpto);
~ObjDepartamento();

void setProx(ObjDepartamento* prox);
void setAnte(ObjDepartamento* ante);
void setDepartamento(Departamento* asso);
Departamento* getAsso();
ObjDepartamento* getProx();
ObjDepartamento* getAnte();

};

#endif
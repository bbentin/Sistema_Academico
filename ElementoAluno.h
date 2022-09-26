#ifndef _ELEMENTOALUNO_H_
#define _ELEMENTOALUNO_H_
#include "Aluno.h"

class ElementoAluno{
private:
    Aluno* Associade;
    ElementoAluno* pProx;
    ElementoAluno* pAnte;

public:
    
ElementoAluno();
ElementoAluno(Aluno* Asso);
~ElementoAluno();

void setAluno(Aluno* asso);
void setProx(ElementoAluno* prox);
void setAnte(ElementoAluno* ante);
ElementoAluno* getProx();
ElementoAluno* getAnte();
Aluno* getAluno();

};

#endif
#ifndef _OBJETOALUNO_H_
#define _OBJETOALUNO_H_
#include "Aluno.h"

class ObjetoAluno{
private:
    Aluno* Associade;
    ObjetoAluno* pProx;
    ObjetoAluno* pAnte;

public:
    
ObjetoAluno();
ObjetoAluno(Aluno* Asso);
~ObjetoAluno();

void setAluno(Aluno* asso);
void setProx(ObjetoAluno* prox);
void setAnte(ObjetoAluno* ante);
ObjetoAluno* getProx();
ObjetoAluno* getAnte();
Aluno* getAluno();

};

#endif
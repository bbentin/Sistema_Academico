#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Universidade.h"

class Principal{
private:
    Datas Atual;
    Aluno Bruno, Gabriela, Mainha;
    Universidade UTFPR, IFPR, UFPR;
    Departamento DAINF,PRAE,PG;
    Disciplina Mat,Geo,Quim,Tecnicas,ED1,ED2,Educa,Psico,Mestrado;

public:

Principal();
~Principal();
void Executar();

};

#endif
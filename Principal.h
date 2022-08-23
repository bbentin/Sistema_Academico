#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Pessoa.h"

class Principal{
private:
    Datas Atual;
    Pessoa Bruno, Gabriela, Mainha;
    Universidade UTFPR, IFPR, UFPR;
    Departamento DAINF,PRAE,PG;

public:

Principal();
~Principal();
void Executar();

};

#endif
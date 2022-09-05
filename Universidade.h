#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
#include <cstring>
#include "ListaDepartamentos.h"

class Universidade{
private:

    char nome[15];
    ListaDepartamentos Departamentos;

public:
Universidade();
Universidade(const char* name);
~Universidade();

void addDpto(Departamento* inserido);
void setNome(char* name);
void Liste();
char* getNome();


};


#endif
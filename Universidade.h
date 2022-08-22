#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
#include <cstring>
class Universidade{
private:

    char nome[15];

public: 

Universidade();
Universidade(const char* name);
~Universidade();

void setNome(char* name);
char* getNome();


};


#endif
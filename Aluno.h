#ifndef _ALUNO_H_
#define _ALUNO_H_
#include "Pessoa.h"
#include <fstream>
class Universidade;

class Aluno: public Pessoa{
private:

    int RA;
    Universidade* filiada;

public:

Aluno();
Aluno(unsigned short int di, unsigned short int me, unsigned short int an, int id);
Aluno(unsigned short int d, unsigned short  int m, unsigned short int a, int id, const char* name, int r);
~Aluno();

void setRa(int registro);
void setUni(Universidade* filia);
int getRa();
Universidade* getUni();

};

#endif
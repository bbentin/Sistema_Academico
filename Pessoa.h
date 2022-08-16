#ifndef _PESSOA_H_
#define _PESSOA_H_
#include "Datas.h"
#include <cstring>
using namespace std;
class Pessoa{

private:
    char nome[30];
    int idade;
    Datas Nascimento;
public:

Pessoa();
~Pessoa();
Pessoa(unsigned short int di, unsigned short  int me, unsigned short int an);
Pessoa(unsigned short int d, unsigned short  int m, unsigned short int a, const char* name);

void setNome(const char* nome);
void setIdade(int age);
unsigned short int getIdade();
const char* getNome();
void Calc_Idade(Datas Atual);
};

#endif
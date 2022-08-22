#ifndef _PESSOA_H_
#define _PESSOA_H_
#include "Datas.h"
#include "Universidade.h"

class Pessoa{

private:
    char nome[30];
    int idade;
    Datas Nascimento;
    Universidade* Univ_Filiada;
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
void InformaDados();
void setUniv(Universidade Uni);
Universidade* getUniv();
};

#endif
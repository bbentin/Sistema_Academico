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
    Departamento* Dpto_Filiado;
public:

Pessoa();
~Pessoa();
Pessoa(unsigned short int di, unsigned short  int me, unsigned short int an);
Pessoa(unsigned short int d, unsigned short  int m, unsigned short int a, const char* name);

void setNome(const char* nome);
void setIdade(int age);
void Calc_Idade(Datas Atual);
void InformaDados();
void setUniv(Universidade Uni);
void setDpto(Departamento* Dpto);
Departamento* getDpto();
Universidade* getUniv();
const char* getNome();
unsigned short int getIdade();

};

#endif
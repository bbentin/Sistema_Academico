#ifndef _PESSOA_H_
#define _PESSOA_H_
#include "Datas.h"
#include <cstring>
class Pessoa{

protected:
    char nome[30];
    int idade;
    int id;
    Datas Nascimento;
    static int cont_id;
public:

Pessoa();
~Pessoa();
Pessoa(unsigned short int di, unsigned short  int me, unsigned short int an, int id);
Pessoa(unsigned short int d, unsigned short  int m, unsigned short int a, int id, const char* name);

void setNome(const char* nome);
void setIdade(int age);
void Calc_Idade(Datas Atual);
void InformaDados();
const char* getNome();
unsigned short int getIdade();

};

#endif
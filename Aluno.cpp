#include "Aluno.h"

Aluno::Aluno():
Pessoa(),RA(0){
}
Aluno::Aluno(unsigned short int di, unsigned short int me, unsigned short int an, int i):
Pessoa(di, me, an,i),RA(0){
}
Aluno::Aluno(unsigned short int d, unsigned short  int m, unsigned short int a, int id, const char* name, int r):
Pessoa(d, m, a, id, name),RA(r){
}
Aluno::~Aluno(){
}

void Aluno::setRa(int registro){
    RA = registro;
}

void Aluno::setUni(Universidade* fili){
    filiada = fili;
}

int Aluno::getRa(){
    return RA;
}

Universidade* Aluno::getUni(){
    return filiada;
}
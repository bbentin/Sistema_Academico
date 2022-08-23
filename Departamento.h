#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_
#include <cstring>
using namespace std;
class Universidade;

class Departamento{
private:

    char nome[15];
    Universidade* Univ_Pertencente;

public:

    Departamento();
    Departamento(const char* name, Universidade* Univ);
    Departamento(const char* name);
    Departamento(Universidade* Univ);
    ~Departamento();
    void setUni(Universidade* Pertencente);
    Universidade* getUni();
    void setNome(const char* name);
    char* getNome();
    

};

#endif
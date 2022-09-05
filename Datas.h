#ifndef _DATAS_H_
#define _DATAS_H_
#include <iostream>
using namespace std;

class Datas{
private:

    unsigned short int dia;
    unsigned short int mes;
    unsigned short int ano;

public:


Datas();
~Datas();
Datas(unsigned short int di, unsigned short int me, unsigned short int an);

void setDia(unsigned short int D);
void setAno(unsigned short int A);
void setMes(unsigned short int M);
unsigned short int getDia();
unsigned short int getMes();
unsigned short int getAno();

};

#endif
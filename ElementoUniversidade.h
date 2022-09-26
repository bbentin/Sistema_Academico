#ifndef _ELEMENTOUNIVERSIDADE_H_
#define _ELEMENTOUNIVERSIDADE_H_
#include "Universidade.h"

class ElementoUniversidade{
private:
    ElementoUniversidade* pAnte;
    ElementoUniversidade* pProx;
    Universidade* Univ_Filiada;
public:
    ElementoUniversidade();
    ElementoUniversidade(Universidade* filiada);
    ~ElementoUniversidade();

void setUni(Universidade* filiada);
void setAnte(ElementoUniversidade* pante);
void setProx(ElementoUniversidade* pprox);
ElementoUniversidade* getAnte();
ElementoUniversidade* getProx();
Universidade* getUni();

};


#endif
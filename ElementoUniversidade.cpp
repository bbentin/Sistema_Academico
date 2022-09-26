#include "ElementoUniversidade.h"


ElementoUniversidade::ElementoUniversidade():Univ_Filiada(nullptr),pAnte(nullptr),pProx(nullptr){
}
ElementoUniversidade::ElementoUniversidade(Universidade* filiada){
    Univ_Filiada = filiada; pAnte = nullptr; pProx = nullptr;
}
ElementoUniversidade::~ElementoUniversidade(){
Univ_Filiada = nullptr; pAnte = nullptr; pProx = nullptr;
}

void ElementoUniversidade::setAnte(ElementoUniversidade* pante){
    pAnte = pante;
}

void ElementoUniversidade::setProx(ElementoUniversidade* pprox){
    pProx = pprox;
}

void ElementoUniversidade::setUni(Universidade* uni){
    Univ_Filiada = uni;
}

ElementoUniversidade* ElementoUniversidade::getAnte(){
    return pAnte;
}

ElementoUniversidade* ElementoUniversidade::getProx(){
    return pProx;
}

Universidade* ElementoUniversidade::getUni(){
    return Univ_Filiada;
}

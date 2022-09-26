#include "ElementoAluno.h"

ElementoAluno::ElementoAluno():Associade(nullptr),pProx(nullptr),pAnte(nullptr){
}
ElementoAluno::ElementoAluno(Aluno* asso){
    Associade = asso; pProx = nullptr; pAnte = nullptr;
}
ElementoAluno::~ElementoAluno(){
}

void ElementoAluno::setAluno(Aluno* asso){
    Associade = asso;
}

void ElementoAluno::setAnte(ElementoAluno* Ante){
    pAnte = Ante;
}

void ElementoAluno::setProx(ElementoAluno* Prox){
    pProx = Prox;
}

ElementoAluno* ElementoAluno::getAnte(){
    return pAnte;
}

ElementoAluno* ElementoAluno::getProx(){
    return pProx;
}

Aluno* ElementoAluno::getAluno(){
    return Associade;
}

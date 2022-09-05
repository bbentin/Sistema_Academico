#include "ObjetoAluno.h"

ObjetoAluno::ObjetoAluno():Associade(nullptr),pProx(nullptr),pAnte(nullptr){
}
ObjetoAluno::ObjetoAluno(Aluno* asso){
    Associade = asso; pProx = nullptr; pAnte = nullptr;
}
ObjetoAluno::~ObjetoAluno(){
}

void ObjetoAluno::setAluno(Aluno* asso){
    Associade = asso;
}

void ObjetoAluno::setAnte(ObjetoAluno* Ante){
    pAnte = Ante;
}

void ObjetoAluno::setProx(ObjetoAluno* Prox){
    pProx = Prox;
}

ObjetoAluno* ObjetoAluno::getAnte(){
    return pAnte;
}

ObjetoAluno* ObjetoAluno::getProx(){
    return pProx;
}

Aluno* ObjetoAluno::getAluno(){
    return Associade;
}

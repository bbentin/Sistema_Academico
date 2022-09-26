#include "ElementoDisciplina.h"


ElementoDisciplina::ElementoDisciplina(){
    pAnte = nullptr; pProx = nullptr; Associada = nullptr;  
}
ElementoDisciplina::ElementoDisciplina(Disciplina* Assoc){
    pAnte = nullptr; pProx = nullptr ; Associada = Assoc;
}
ElementoDisciplina::~ElementoDisciplina(){
}

void ElementoDisciplina::setAnte(ElementoDisciplina* ante){
    pAnte = ante;
}

void ElementoDisciplina::setProx(ElementoDisciplina* prox){
    pProx = prox;
}

void ElementoDisciplina::setDisci(Disciplina* asso){
    Associada = asso;
}

ElementoDisciplina* ElementoDisciplina::getAnte(){
    return pAnte;
}

ElementoDisciplina* ElementoDisciplina::getProx(){
    return pProx;
}

Disciplina* ElementoDisciplina::getDisci(){
    return Associada;
}
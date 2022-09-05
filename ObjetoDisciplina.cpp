#include "ObjetoDisciplina.h"

ObjetoDisciplina::ObjetoDisciplina(){
    pAnte = nullptr; pProx = nullptr; Associada = nullptr;
}
ObjetoDisciplina::ObjetoDisciplina(Disciplina* Assoc){
    pAnte = nullptr; pProx = nullptr ; Associada = Assoc;
}
ObjetoDisciplina::~ObjetoDisciplina(){
}

void ObjetoDisciplina::setAnte(ObjetoDisciplina* ante){
    pAnte = ante;
}

void ObjetoDisciplina::setProx(ObjetoDisciplina* prox){
    pProx = prox;
}

void ObjetoDisciplina::setDisci(Disciplina* asso){
    Associada = asso;
}

ObjetoDisciplina* ObjetoDisciplina::getAnte(){
    return pAnte;
}

ObjetoDisciplina* ObjetoDisciplina::getProx(){
    return pProx;
}

Disciplina* ObjetoDisciplina::getDisci(){
    return Associada;
}
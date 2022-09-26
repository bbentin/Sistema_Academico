#include "ElementoDepartamento.h"

ElementoDepartamento::ElementoDepartamento():Associado(nullptr),pProx(nullptr),pAnte(nullptr){
}
ElementoDepartamento::~ElementoDepartamento(){
}
ElementoDepartamento::ElementoDepartamento(Departamento* Dpto){
    Associado = Dpto; pProx = nullptr; pAnte = nullptr;
}

void ElementoDepartamento::setAnte(ElementoDepartamento* ante){
    pAnte = ante;
}

void ElementoDepartamento::setProx(ElementoDepartamento* prox){
    pProx = prox;
}

void ElementoDepartamento::setDepartamento(Departamento* asso){
    Associado = asso;
}

Departamento* ElementoDepartamento::getAsso(){
    return Associado;
}

ElementoDepartamento* ElementoDepartamento::getAnte(){
    return pAnte;
}

ElementoDepartamento* ElementoDepartamento::getProx(){
    return pProx;
}


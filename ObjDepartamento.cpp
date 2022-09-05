#include "ObjDepartamento.h"

ObjDepartamento::ObjDepartamento():Associado(nullptr),pProx(nullptr),pAnte(nullptr){
}
ObjDepartamento::~ObjDepartamento(){
}
ObjDepartamento::ObjDepartamento(Departamento* Dpto){
    Associado = Dpto; pProx = nullptr; pAnte = nullptr;
}

void ObjDepartamento::setAnte(ObjDepartamento* ante){
    pAnte = ante;
}

void ObjDepartamento::setProx(ObjDepartamento* prox){
    pProx = prox;
}

void ObjDepartamento::setDepartamento(Departamento* asso){
    Associado = asso;
}

Departamento* ObjDepartamento::getAsso(){
    return Associado;
}

ObjDepartamento* ObjDepartamento::getAnte(){
    return pAnte;
}

ObjDepartamento* ObjDepartamento::getProx(){
    return pProx;
}


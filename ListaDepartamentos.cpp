#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos():pPrimeiro(nullptr),pAtual(nullptr),Associada(nullptr),qtdDptos(0){
}
ListaDepartamentos::ListaDepartamentos(Universidade* asso){
Associada = asso; pPrimeiro = nullptr; pAtual = nullptr; qtdDptos = 0;
}
ListaDepartamentos::~ListaDepartamentos(){
    
ObjDepartamento* paux = pPrimeiro;

    while(paux->getProx() != nullptr){
        delete paux;
        paux = paux->getProx();
    }
}

void ListaDepartamentos::addDpto(Departamento* inserido){

ObjDepartamento* paux = new ObjDepartamento(inserido);

    if(paux != nullptr){
        if(pPrimeiro == nullptr){
            pPrimeiro = paux; pAtual = paux;
        }
        else{
            paux->setAnte(pAtual);pAtual->setProx(paux);
            pAtual = paux;
        }
    }
}

void ListaDepartamentos::setUni(Universidade* associ){
    Associada = associ;
}

Universidade* ListaDepartamentos::getUni(){
    return Associada;
}

ObjDepartamento* ListaDepartamentos::getPrimeiro(){
    return pPrimeiro;
}

ObjDepartamento* ListaDepartamentos::getUltimo(){
    return pAtual;
}

void ListaDepartamentos::Liste(){

ObjDepartamento* paux = pPrimeiro;

    while(paux != pAtual){
        cout<<paux->getAsso()->getNome()<<endl;
        paux = paux->getProx();
    }
}
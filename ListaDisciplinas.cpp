#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas():pPrimeiro(nullptr),pAtual(nullptr),cont_disci(0),Associado(nullptr){
}
ListaDisciplinas::ListaDisciplinas(Departamento* Associ){
    Associado = Associ; pPrimeiro = nullptr; pAtual = nullptr;  cont_disci = 0;
}
ListaDisciplinas::~ListaDisciplinas(){

ObjetoDisciplina* paux = pPrimeiro;
ObjetoDisciplina* paux1 = nullptr;

    while (paux != nullptr){
        paux1 = paux->getProx();
        delete paux;
        paux = paux1;
    }
    
}

void ListaDisciplinas::addDisci(Disciplina* inserida){

ObjetoDisciplina* paux = nullptr;
paux = new ObjetoDisciplina(inserida);
    
    if(paux != nullptr){
        if(pPrimeiro == nullptr){
            pPrimeiro = paux; pAtual = paux;
        }
        else{
            pAtual->setProx(paux);
            paux->setAnte(pAtual);
            pAtual = paux;
        }
    }
}

void ListaDisciplinas::setDpto(Departamento* Dpto){
    Associado = Dpto;
}

ObjetoDisciplina* ListaDisciplinas::getPrimeiro(){
    return pPrimeiro;
}

ObjetoDisciplina* ListaDisciplinas::getAtual(){
    return pAtual;
}

void ListaDisciplinas::Liste(){

ObjetoDisciplina* paux = pPrimeiro;
    
    while(paux != nullptr){
        cout<<paux->getDisci()->getNome()<<endl;
        paux = paux->getProx();
    }
}
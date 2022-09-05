#include "ListaAlunos.h"

ListaAlunos::ListaAlunos():Associada(nullptr),pPrim(nullptr),pAtual(nullptr){
}
ListaAlunos::ListaAlunos(Disciplina* Asso){
    Associada = Asso; pPrim = nullptr; pAtual = nullptr;
}
ListaAlunos::~ListaAlunos(){

ObjetoAluno* paux = pPrim;

    while (paux->getProx() != nullptr){
        delete paux;
        paux = paux->getProx();
    }
}

void ListaAlunos::addAluno(Aluno* inserido){

ObjetoAluno* paux = new ObjetoAluno(inserido);

    if(paux != nullptr){
        if(pPrim == nullptr){
            pPrim = paux; pAtual = paux;
        }
        else{
            pAtual->setProx(paux); paux->setAnte(pAtual);
            pAtual = paux;
        }
    }
}

void ListaAlunos::Liste(){

ObjetoAluno* paux = pPrim;

    while(paux != pAtual){
        std::cout<<paux->getAluno()->getNome()<<std::endl;
        paux = paux->getProx();
    }
}

void ListaAlunos::setDisci(Disciplina* disci){
    Associada = disci;
}

ObjetoAluno* ListaAlunos::getAtual(){
    return pAtual;
}

ObjetoAluno* ListaAlunos::getPrimeiro(){
    return pPrim;
}

Disciplina* ListaAlunos::getDisci(){
    return Associada;
}
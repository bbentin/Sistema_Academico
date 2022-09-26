#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas():pPrimeiro(nullptr),pAtual(nullptr),cont_disci(0),Associado(nullptr){
}
ListaDisciplinas::ListaDisciplinas(Departamento* Associ){
    Associado = Associ; pPrimeiro = nullptr; pAtual = nullptr;  cont_disci = 0;
}
ListaDisciplinas::~ListaDisciplinas(){
    LimpaLista();
}

void ListaDisciplinas::addDisci(Disciplina* inserida){

ElementoDisciplina* paux = nullptr;
paux = new ElementoDisciplina(inserida);
    
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

ElementoDisciplina* ListaDisciplinas::getPrimeiro(){
    return pPrimeiro;
}

ElementoDisciplina* ListaDisciplinas::getAtual(){
    return pAtual;
}

void ListaDisciplinas::Liste(){

ElementoDisciplina* paux = pPrimeiro;
    
    while(paux != pAtual->getProx()){
        cout<<"     Disciplina: "<<paux->getDisci()->getNome()<<endl;
        paux = paux->getProx();
    }
    cout<<endl<<endl;
}

void ListaDisciplinas::GravarDisciplinas(){

    ofstream GravadorDisciplinas("Disciplinas.txt",ios::out);

    if(!GravadorDisciplinas){
        cerr<<"Arquivo nao encontrado"<<endl;
        fflush(stdin);      getchar();      return;
    }
    else{
        ElementoDisciplina* pElemento = pPrimeiro;
        Disciplina* pDisci = nullptr;
        while(pElemento != nullptr){
            pDisci = pElemento->getDisci();
            GravadorDisciplinas<<pDisci->getNome()<<"espaco    "
                                <<pDisci->getDpto()<<endl;
            pElemento = pElemento->getProx();
        }
    }
}

void ListaDisciplinas::LimpaLista(){
    ElementoDisciplina* paux = pPrimeiro;

    while(pPrimeiro != nullptr){
        paux = pPrimeiro->getProx();
        delete pPrimeiro;
        pPrimeiro = paux;
    }
    
}

Disciplina* ListaDisciplinas::localizarDisci(char* name){
    
ElementoDisciplina* paux = pPrimeiro;

    if (name != nullptr){
        if(!strcmp(paux->getDisci()->getNome(),name)){return paux->getDisci();}
        while (paux != pAtual->getProx()){
            if(!strcmp(paux->getDisci()->getNome(),name)){
                return paux->getDisci();
            }
            paux = paux->getProx();
        }
       
    }
    return nullptr;
}

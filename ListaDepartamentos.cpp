#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos():pPrimeiro(nullptr),pAtual(nullptr),Associada(nullptr),qtdDptos(0){
}
ListaDepartamentos::ListaDepartamentos(Universidade* asso){
Associada = asso; pPrimeiro = nullptr; pAtual = nullptr; qtdDptos = 0;
}
ListaDepartamentos::~ListaDepartamentos(){
LimpaLista();
}

void ListaDepartamentos::addDpto(Departamento* inserido){

ElementoDepartamento* paux = new ElementoDepartamento(inserido);

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

void ListaDepartamentos::setUni(Universidade* associ){
    Associada = associ;
}

void ListaDepartamentos::Liste(){

ElementoDepartamento* paux = pPrimeiro;

    while(paux != pAtual->getProx()){
        cout<<"     Departamento: "<<paux->getAsso()->getNome()<<endl;
        paux = paux->getProx();
    }
    cout<<endl<<endl;
}

void ListaDepartamentos::GraveDepartamentos(){

    ofstream GravadorDptos("Departamentos.txt", ios::out);

    if(!GravadorDptos){
        cerr<<"Arquivo nao encontrado"<<endl;
        fflush(stdin);      getchar();      return;
    }
    else{
        ElementoDepartamento* pElemento = pPrimeiro;
        Departamento* pDpto = nullptr;
            while(pElemento != nullptr){
                pDpto = pElemento->getAsso();
                GravadorDptos<<pDpto->getNome()<<endl;
                pElemento = pElemento->getProx();
            }
    }
}

void ListaDepartamentos::LimpaLista(){
ElementoDepartamento* paux = pPrimeiro;

    while(pPrimeiro != nullptr){
        paux = pPrimeiro->getProx();
        delete pPrimeiro;
        pPrimeiro = paux;
    }
}

Departamento* ListaDepartamentos::LocalizarDpto(const char* nome){
ElementoDepartamento* paux = pPrimeiro;

    if(nome != nullptr){
        if(!strcmp(paux->getAsso()->getNome(), nome)){return paux->getAsso();}
        while(paux != pAtual->getProx()){
            if(!strcmp(paux->getAsso()->getNome(), nome)){
                return paux->getAsso();
            }
            paux = paux->getProx();
        }
    }
    return nullptr;
}

Universidade* ListaDepartamentos::getUni(){
    return Associada;
}

ElementoDepartamento* ListaDepartamentos::getPrimeiro(){
    return pPrimeiro;
}

ElementoDepartamento* ListaDepartamentos::getUltimo(){
    return pAtual;
}


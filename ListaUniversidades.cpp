#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades(){
    pAtual = nullptr; pPrimeiro = nullptr;
}
ListaUniversidades::~ListaUniversidades(){
    LimpaLista();
}

void ListaUniversidades::inserirUni(Universidade* Uni){
    ElementoUniversidade* paux = new ElementoUniversidade(Uni);

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

void ListaUniversidades::Liste(){
    
ElementoUniversidade* paux = pPrimeiro;

    while(paux != pAtual->getProx()){
        cout<<"     Universidade :"<<paux->getUni()->getNome()<<endl;
        paux = paux->getProx();
    }
    cout<<endl<<endl;
}

Universidade* ListaUniversidades::localizarUni(char* name){
    
ElementoUniversidade* paux = pPrimeiro;

    
    if (name != nullptr){
        if(!strcmp(paux->getUni()->getNome(),name)){return paux->getUni();}
        while (paux != pAtual->getProx()){
            if(!strcmp(paux->getUni()->getNome(),name)){
                return paux->getUni();
            }
            paux = paux->getProx();
        }
    }
     return nullptr;
}

void ListaUniversidades::retirarUni(char* name){

ElementoUniversidade* paux = pPrimeiro;

    if(name!= nullptr){
        while (paux != pAtual){
            if(!strcmp(paux->getUni()->getNome(),name)){
                paux->getAnte()->setProx(paux->getProx());
                paux->getProx()->setAnte(paux->getAnte());
                cout<<"Removendo a Universidade:"<<paux->getUni()->getNome()<<endl; delete paux; return;
            }
        cout<<"A Universidade a ser removida nao foi encontrada"<<endl;
        }
    }
}

void ListaUniversidades::GravarUnis(){

    ofstream GravadorUniversidade("Universidades.txt",ios::out);

    if(!GravadorUniversidade){
        cerr<<"Arquivo nao encontrado"<<endl;
        fflush(stdin);
        getchar();
        return;
    }
    else{
        ElementoUniversidade* pElemento = pPrimeiro;

        while(pElemento != nullptr){
            Universidade* pUniv;
            pUniv = pElemento->getUni();
            GravadorUniversidade<<pUniv->getNome()<<endl;
            pElemento = pElemento->getProx();
        }
    }
    GravadorUniversidade.close();
}

void ListaUniversidades::LimpaLista(){

ElementoUniversidade* paux = pPrimeiro;
    
    while(pPrimeiro != nullptr){
        paux = pPrimeiro->getProx();
        delete pPrimeiro;
        pPrimeiro = paux;
    }
}
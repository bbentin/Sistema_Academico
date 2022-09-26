#include "ListaAlunos.h"

ListaAlunos::ListaAlunos():Associada(nullptr),pPrim(nullptr),pAtual(nullptr){
}
ListaAlunos::ListaAlunos(Disciplina* Asso){
    Associada = Asso; pPrim = nullptr; pAtual = nullptr;
}
ListaAlunos::~ListaAlunos(){
LimpaLista();
}

void ListaAlunos::addAluno(Aluno* inserido){

ElementoAluno* paux = new ElementoAluno(inserido);

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

ElementoAluno* paux = pPrim;

    while(paux != pAtual->getProx()){
        std::cout<<"        Aluno: "<<paux->getAluno()->getNome()<<std::endl;
        paux = paux->getProx();
    }
    cout<<endl<<endl;
}

void ListaAlunos::GraveAlunos(){

    ofstream GravadorAlunos("Alunos.txt",ios::out);

    if(!GravadorAlunos){
        cerr<<"Nao foi possivel achar o arquivo"<<endl;
        fflush(stdin);      getchar();      return;
    }
    else{
        ElementoAluno* pELemento = pPrim;
        Aluno* pAluno = nullptr;

            while(pELemento != nullptr){
                pAluno = pELemento->getAluno();
                GravadorAlunos<<pAluno->getNome()<<"Espaco   "
                              <<pAluno->getIdade()<<endl;
            pELemento = pELemento->getProx();
            }
    }
}

void ListaAlunos::LimpaLista(){

ElementoAluno* paux = pPrim;

    while(pPrim != nullptr){
        paux = pPrim->getProx();
        delete pPrim;
        pPrim = paux;
    }
}

void ListaAlunos::setDisci(Disciplina* disci){
    Associada = disci;
}

Aluno* ListaAlunos::LocalizarAluno(char* name){

ElementoAluno* paux = pPrim;

    if(name != nullptr){
        if(!strcmp(paux->getAluno()->getNome(),name)){return paux->getAluno();}
        while(paux != pAtual->getProx()){
            if(!strcmp(paux->getAluno()->getNome(),name)){
                return paux->getAluno();
            }
        paux = paux->getProx();
        }
    }
    else{
        cout<<"Nome invalido"<<endl;
    }
return nullptr;
}

ElementoAluno* ListaAlunos::getAtual(){
    return pAtual;
}

ElementoAluno* ListaAlunos::getPrimeiro(){
    return pPrim;
}

Disciplina* ListaAlunos::getDisci(){
    return Associada;
}

#include "Departamento.h"

Departamento::Departamento():nome(""),Univ_Pertencente(nullptr),Disciplinas(this){
}
Departamento::~Departamento(){
    Disciplinas.LimpaLista();
}
Departamento::Departamento(const char* name){
    strcpy(nome,name);      Univ_Pertencente = nullptr; 
}
Departamento::Departamento(Universidade* Univ):nome(""){
    Univ_Pertencente = Univ;
}
Departamento::Departamento(const char* name, Universidade* Univ){
    strcpy(nome,name);      Univ_Pertencente =  Univ;
}

void Departamento::setNome(const char* name){
    strcpy(nome,name);
}

void Departamento::setUni(Universidade* Uni){
    Univ_Pertencente = Uni;
}

void Departamento::addDisci(Disciplina* inserida){
    Disciplinas.addDisci(inserida);
}

void Departamento::Liste(){
    Disciplinas.Liste();
}

char* Departamento::getNome(){
    return nome;
}

Universidade* Departamento::getUni(){
    return Univ_Pertencente;
}



#include "Disciplina.h"

Disciplina::Disciplina():Dpto_Assoc(nullptr),id(0),nome(""),Alunos(this){
}
Disciplina::Disciplina(const char* name){
    strcpy(nome,name);
}
Disciplina::Disciplina(Departamento* filiado,const char* name):Alunos(this){
    Dpto_Assoc = filiado; strcpy(nome,name); id = 0;
}
Disciplina::Disciplina(Departamento* filiado):Alunos(this),nome(""){
Dpto_Assoc = filiado; id = 0;
}
Disciplina::~Disciplina(){
}

void Disciplina::setDpto(Departamento* filiado){
    Dpto_Assoc = filiado;
}

void Disciplina::setId(int i){
    id = i;
}

void Disciplina::setNome(char* name){
    strcpy(nome,name);
}

void Disciplina::addAluno(Aluno* inserido){
    Alunos.addAluno(inserido);
}

void Disciplina::Liste(){
    Alunos.Liste();
}

char* Disciplina::getNome(){
    return nome;
}

int Disciplina::getId(){
    return id;
}

Departamento* Disciplina::getDpto(){
    return Dpto_Assoc;
}
#include "Universidade.h"

Universidade::Universidade():Departamentos(this){
}
Universidade::~Universidade(){
}
Universidade::Universidade(const char* name):Departamentos(this){
    std::strcpy(nome,name);
}

void Universidade::setNome(char* name){
    std::strcpy(nome,name);
}

void Universidade::addDpto(Departamento* inserido){
    Departamentos.addDpto(inserido);
}

void Universidade::Liste(){
    Departamentos.Liste();
}

char* Universidade::getNome(){
    return nome;
}

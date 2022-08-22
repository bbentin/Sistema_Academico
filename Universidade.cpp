#include "Universidade.h"

Universidade::Universidade(){
    std::strcpy(nome,"");
}
Universidade::~Universidade(){
}
Universidade::Universidade(const char* name){
    std::strcpy(nome,name);
}

void Universidade::setNome(char* name){
    std::strcpy(nome,name);
}
char* Universidade::getNome(){
    return nome;
}
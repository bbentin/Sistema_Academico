#include "Pessoa.h"

Pessoa::Pessoa(){
    Nascimento.setDia(1);
    Nascimento.setMes(1);
    Nascimento.setAno(2000);
    strcpy(nome,"Fulan");
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    strcpy(nome,"Fulan");
    
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a, const char* name){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    strcpy(nome,name);
}
Pessoa::~Pessoa(){
}

void Pessoa::setIdade(int age){
    idade = age;
}

void Pessoa::setNome(const char* name){
    strcpy(nome, name);
}

const char* Pessoa::getNome(){
    return nome;
}

void Pessoa::Calc_Idade(Datas Atual){
    idade = Atual.getAno() - Nascimento.getAno();
        if(Nascimento.getMes() > Atual.getMes()){
            idade--;
        }
        if(Nascimento.getMes() == Atual.getMes()){
            if(Nascimento.getDia() == Atual.getDia()){
                std::cout<<"Feliz Aniversario"<<std::endl;
            }
            if(Nascimento.getDia() > Atual.getDia()){
                idade--;
            }           
        }
        std::cout<<idade<<endl;
}

unsigned short int Pessoa::getIdade(){
    return idade;
}
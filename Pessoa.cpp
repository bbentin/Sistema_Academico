#include "Pessoa.h"

Pessoa::Pessoa(){
    Nascimento.setDia(1);
    Nascimento.setMes(1);
    Nascimento.setAno(2000);
    std::strcpy(nome,"Fulan");         id = cont_id;       cont_id++;
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a, int i){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    std::strcpy(nome,"Fulan");        id = i;         cont_id++;
    
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a, int i, const char* name){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    std::strcpy(nome,name);        id = i;         cont_id++;
}
Pessoa::~Pessoa(){
    cont_id--;
}

void Pessoa::setIdade(int age){
    idade = age;
}

void Pessoa::setNome(const char* name){
    std::strcpy(nome, name);
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
}

unsigned short int Pessoa::getIdade(){
    return idade;
}

void Pessoa::InformaDados(){
   std:: cout<<"Nome:"<<nome<<std::endl<<"Idade:"<<idade<<std::endl;
}


int Pessoa::cont_id = 0;
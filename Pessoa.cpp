#include "Pessoa.h"

Pessoa::Pessoa(){
    Nascimento.setDia(1);
    Nascimento.setMes(1);
    Nascimento.setAno(2000);
    std::strcpy(nome,"Fulan");
    Univ_Filiada = nullptr;         Dpto_Filiado = nullptr;
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    std::strcpy(nome,"Fulan");
    Univ_Filiada = nullptr;         Dpto_Filiado = nullptr;
    
}
Pessoa::Pessoa(unsigned short int d, unsigned short int m, unsigned short int a, const char* name){
    Nascimento.setDia(d);
    Nascimento.setMes(m);
    Nascimento.setAno(a);
    std::strcpy(nome,name);
    Univ_Filiada = nullptr;         Dpto_Filiado = nullptr;
}
Pessoa::~Pessoa(){
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
   std:: cout<<"Nome:"<<nome<<std::endl<<"Idade:"<<idade<<std::endl<<"Estuda em:"<<Univ_Filiada->getNome()<<std::endl
   <<"Filiado ao Departamento:"<<Dpto_Filiado->getNome()<<endl<<endl;
}

void Pessoa::setUniv(Universidade Uni){
    Univ_Filiada = &Uni;
}

Universidade* Pessoa::getUniv(){
    return Univ_Filiada;
}

void Pessoa::setDpto(Departamento* Dpto){
    Dpto_Filiado = Dpto;
}

Departamento* Pessoa::getDpto(){
    return Dpto_Filiado;
}
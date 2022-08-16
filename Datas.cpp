#include "Datas.h"

Datas::Datas(){
    ano = 0;
    dia = 0;
    mes = 0;
}
Datas::~Datas(){
}

Datas::Datas(unsigned short int di, unsigned short int me, unsigned short int an){
    dia = di;
    mes = me;
    ano = ano;
}

void Datas::setAno(unsigned short int a){
    ano = a;
}

void Datas::setDia(unsigned short int d){
    if((mes == 2) && (ano%4 == 0)){
        if(d > 29){
            std::cerr<<"Dia inexistente"<<std::endl;
            return;
        }
    }
    if((mes == 2) && (ano%4 != 0)){
        if(d > 28){
            std::cerr<<"Dia Inexistente"<<std::endl;
            return;
        }
    }
    else if(dia > 31){
        std::cerr<<"Dia Inexistente"<<std::endl;
        return;
    }
    dia = d;
}

void Datas::setMes(unsigned short int m){
    if( m > 12){
        std::cerr<<"Mes Inexistente"<<std::endl;
    }
    else{
        mes = m;
    }
}

unsigned short int Datas::getAno(){
    return ano;
}

unsigned short int Datas::getDia(){
    return dia;
}

unsigned short int Datas::getMes(){
    return mes;
}

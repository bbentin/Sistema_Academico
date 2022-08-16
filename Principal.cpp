#include "Principal.h"


Principal::Principal():Bruno(18,5,1998,"Bruno"),Gabriela(1,9,2005,"Gabriela"){
    Atual.setMes(8);
    Atual.setDia(13);
    Atual.setAno(2022);
}
Principal::~Principal(){
}

void Principal::Executar(){
    Bruno.Calc_Idade(Atual); cout<< Bruno.getNome()<<endl;
    Gabriela.Calc_Idade(Atual); cout<< Gabriela.getNome();
}
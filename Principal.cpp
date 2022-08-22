#include "Principal.h"

Principal::Principal():Bruno(18,5,1998,"Bruno"),Gabriela(1,9,2005,"Gabriela"),Mainha(22,6,1974,"Mainha"),UFPR("UFPR"),
IFPR("IFPR"),UTFPR("UTFPR"){
    Atual.setMes(8);
    Atual.setDia(13);
    Atual.setAno(2022);
}
Principal::~Principal(){
}

void Principal::Executar(){
    Bruno.Calc_Idade(Atual); Bruno.setUniv(UTFPR); Bruno.InformaDados();
    Gabriela.Calc_Idade(Atual); Gabriela.setUniv(IFPR); Gabriela.InformaDados();
    Mainha.Calc_Idade(Atual); Mainha.setUniv(UFPR); Mainha.InformaDados();
}
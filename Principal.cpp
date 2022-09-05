#include "Principal.h"

Principal::Principal():Bruno(18,5,1998,1,"Bruno",12),Gabriela(1,9,2005,2,"Gabriela",13),Mainha(22,6,1974,3,"Mainha",1),UFPR("UFPR"),
IFPR("IFPR"),UTFPR("UTFPR"),PRAE("PRAE"),PG("PG"),DAINF("DAINF"),Mat("Matematica"),Psico("Psicologia da Educacao"),Tecnicas("Tecnicas de Programacao")
,Geo("Geo"),Quim("Quimica"),ED1("Estrutura de Dados 1"),ED2("Estrutura de Dados 2"),Educa("Educacao"),Mestrado("Mestrado")
{
    Atual.setMes(8);
    Atual.setDia(13);
    Atual.setAno(2022);
}
Principal::~Principal(){
}

void Principal::Executar(){
    UFPR.addDpto(&PRAE);    UFPR.addDpto(&DAINF);   UFPR.addDpto(&PG);


    PRAE.addDisci(&Mestrado); PRAE.addDisci(&Educa); PRAE.addDisci(&Psico); PRAE.Liste();
        Mestrado.addAluno(&Mainha); Mestrado.addAluno(&Gabriela);
            Mestrado.Liste();
    DAINF.addDisci(&ED1); DAINF.addDisci(&ED2); DAINF.addDisci(&Tecnicas); DAINF.Liste();
    PG.addDisci(&Mat); PG.addDisci(&Quim); PG.addDisci(&Geo); PG.Liste();
        Mat.addAluno(&Gabriela); Mat.addAluno(&Bruno);
            Mat.Liste();

    Bruno.Calc_Idade(Atual);  Bruno.InformaDados();
    Gabriela.Calc_Idade(Atual); Gabriela.InformaDados();
    Mainha.Calc_Idade(Atual); Mainha.InformaDados();
    
} 
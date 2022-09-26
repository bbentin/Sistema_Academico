#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "ListaUniversidades.h"

class Principal{
private:
    Datas Atual;
    Aluno Bruno, Gabriela, Mainha;
    Universidade UTFPR, IFPR, UFPR;
    Departamento DAINF,PRAE,PG;
    Disciplina Mat,Geo,Quim,Tecnicas,ED1,ED2,Educa,Psico,Mestrado;

    ListaUniversidades* Universidades;
    ListaDepartamentos* Departamentos;
    ListaDisciplinas* Disciplinas;
    ListaAlunos* Alunos;    

public:

Principal();
~Principal();

void Menu();
void MenuCad();
void MenuExec();
void MenuGravar();

void CadUni();
void CadDpto();
void CadDisci();
void CadAluno();

void Executar();
void GravarAlunos();
void GravarDisciplinas();
void GravarDepartamentos();
void GravarUniversidades();
void GravarTudo();


};

#endif
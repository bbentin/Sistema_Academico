#ifndef _LISTADISCIPLINAS_H_
#define _LISTADISCIPLINAS_H_
#include "ElementoDisciplina.h"

class ListaDisciplinas{
private:
    ElementoDisciplina* pPrimeiro;
    ElementoDisciplina* pAtual;
    int cont_disci;
    Departamento* Associado;
public:

    ListaDisciplinas();
    ListaDisciplinas(Departamento* associ);
    ~ListaDisciplinas();

void addDisci(Disciplina* inserida);
void setDpto(Departamento* associ); 
void Liste();
void GravarDisciplinas();
void LimpaLista();
ElementoDisciplina* getPrimeiro();
ElementoDisciplina* getAtual();
Disciplina* localizarDisci(char* nome);


};

#endif
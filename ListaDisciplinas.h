#ifndef _LISTADISCIPLINAS_H_
#define _LISTADISCIPLINAS_H_
#include "ObjetoDisciplina.h"

class ListaDisciplinas{
private:
    ObjetoDisciplina* pPrimeiro;
    ObjetoDisciplina* pAtual;
    int cont_disci;
    Departamento* Associado;
public:

    ListaDisciplinas();
    ListaDisciplinas(Departamento* associ);
    ~ListaDisciplinas();

void addDisci(Disciplina* inserida);
void setDpto(Departamento* associ); 
ObjetoDisciplina* getPrimeiro();
ObjetoDisciplina* getAtual();
void Liste();

};

#endif
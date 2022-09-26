#ifndef _LISTAALUNOS_H_
#define _LISTAALUNOS_H_
#include "ElementoAluno.h"
class Disciplina;

class ListaAlunos{
private:
    ElementoAluno* pPrim;
    ElementoAluno* pAtual;
    Disciplina* Associada;
public:
    
    ListaAlunos();
    ListaAlunos(Disciplina* Assoc);
    ~ListaAlunos();

void addAluno(Aluno* add);
void setDisci(Disciplina* asso);
void Liste();
void GraveAlunos();
void LimpaLista();

Aluno* LocalizarAluno(char* name);
ElementoAluno* getPrimeiro();
ElementoAluno* getAtual();
Disciplina* getDisci();

};

#endif
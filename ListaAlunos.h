#ifndef _LISTAALUNOS_H_
#define _LISTAALUNOS_H_
#include "ObjetoAluno.h"
class Disciplina;

class ListaAlunos{
private:
    ObjetoAluno* pPrim;
    ObjetoAluno* pAtual;
    Disciplina* Associada;
public:
    
    ListaAlunos();
    ListaAlunos(Disciplina* Assoc);
    ~ListaAlunos();

void addAluno(Aluno* add);
void setDisci(Disciplina* asso);
void Liste();

ObjetoAluno* getPrimeiro();
ObjetoAluno* getAtual();
Disciplina* getDisci();

};

#endif
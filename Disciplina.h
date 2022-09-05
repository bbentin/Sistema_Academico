#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_
#include "ListaAlunos.h"
class Departamento;

class Disciplina{
private:
    int id;
    char nome[30];
    Departamento* Dpto_Assoc;
    ListaAlunos Alunos;

public:

Disciplina();
~Disciplina();
Disciplina(const char* name);
Disciplina(Departamento* filiado);
Disciplina(Departamento* filiado,const char* name);

void setNome(char* name);
void setId(int i);
void setDpto(Departamento* Associado);
void addAluno(Aluno* inserido);
void Liste();
char* getNome();
int getId();
Departamento* getDpto();

};

#endif
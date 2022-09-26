#ifndef _ELEMENTODISCIPLINA_H_
#define _ELEMENTODISCIPLINA_H_
#include "Disciplina.h"

class ElementoDisciplina{
private:

    ElementoDisciplina* pProx;
    ElementoDisciplina* pAnte;
    Disciplina* Associada;
public:

ElementoDisciplina();
ElementoDisciplina(Disciplina* assoc);
~ElementoDisciplina();

void setDisci(Disciplina* assoc);
void setAnte(ElementoDisciplina* ante);
void setProx(ElementoDisciplina* prox);
Disciplina* getDisci();
ElementoDisciplina* getProx();
ElementoDisciplina* getAnte();

};

#endif
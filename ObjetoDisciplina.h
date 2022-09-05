#ifndef _OBJETODISCIPLINA_H_
#define _OBJETODISCIPLINA_H_
#include "Disciplina.h"

class ObjetoDisciplina{
private:

    ObjetoDisciplina* pProx;
    ObjetoDisciplina* pAnte;
    Disciplina* Associada;
    
public:

ObjetoDisciplina();
ObjetoDisciplina(Disciplina* assoc);
~ObjetoDisciplina();

void setDisci(Disciplina* assoc);
void setAnte(ObjetoDisciplina* ante);
void setProx(ObjetoDisciplina* prox);
Disciplina* getDisci();
ObjetoDisciplina* getProx();
ObjetoDisciplina* getAnte();

};

#endif
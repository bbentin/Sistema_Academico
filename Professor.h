#ifndef _PROFESSOR_H_
#define _PROFESSOR_H_
#include "Pessoa.h"

class Professor:public Pessoa{
private:
    
public:
    Professor();
    Professor(unsigned short int d, unsigned short  int m, unsigned short int a, int id, const char* name);
    Professor(unsigned short int d, unsigned short  int m, unsigned short int a, int id);
    ~Professor();
};
#endif

#include "Principal.h"

Principal::Principal():Bruno(18,5,1998,1,"Bruno",12),Gabriela(1,9,2005,2,"Gabriela",13),Mainha(22,6,1974,3,"Mainha",1),UFPR("UFPR"),
IFPR("IFPR"),UTFPR("UTFPR"),PRAE("PRAE"),PG("PG"),DAINF("DAINF"),Mat("Matematica"),Psico("Psicologia da Educacao"),Tecnicas("Tecnicas de Programacao")
,Geo("Geo"),Quim("Quimica"),ED1("Estrutura de Dados 1"),ED2("Estrutura de Dados 2"),Educa("Educacao"),Mestrado("Mestrado")
{   
    Universidades = new ListaUniversidades(); Departamentos = new ListaDepartamentos(); 
    Disciplinas = new ListaDisciplinas(); Alunos = new ListaAlunos();
    Universidades->inserirUni(&IFPR);   Departamentos->addDpto(&PRAE);  
    Universidades->inserirUni(&UTFPR);  Departamentos->addDpto(&PG);
    Universidades->inserirUni(&UFPR);   Departamentos->addDpto(&DAINF);

    Disciplinas->addDisci(&Mat);    Disciplinas->addDisci(&Psico);  Disciplinas->addDisci(&Tecnicas);
    Disciplinas->addDisci(&Geo);    Disciplinas->addDisci(&Quim);   Disciplinas->addDisci(&ED1);
    Disciplinas->addDisci(&ED2);    Disciplinas->addDisci(&Educa);  Disciplinas->addDisci(&Mestrado);   
    
    UFPR.addDpto(&PG); UFPR.addDpto(&DAINF); UFPR.addDpto(&PRAE);
    
    DAINF.addDisci(&ED1); DAINF.addDisci(&ED2); DAINF.addDisci(&Tecnicas);
    PRAE.addDisci(&Educa); PRAE.addDisci(&Mestrado); PRAE.addDisci(&Psico);
    PG.addDisci(&Mat); PG.addDisci(&Geo);  PG.addDisci(&Quim);

    Alunos->addAluno(&Mainha);  Alunos->addAluno(&Gabriela);    Alunos->addAluno(&Bruno);
    
    Atual.setMes(8); Atual.setDia(13); Atual.setAno(2022);
}
Principal::~Principal(){
    delete Universidades;   delete Departamentos;   delete Disciplinas; delete Alunos;
}

void Principal::Menu(){
    int op = -1;

    while(op != 4){
        cout<<"Escolha uma Opcao:"<<endl<<endl<<endl;
        cout<<"1 - Cadastrar"<<endl
            <<"2 - Listar"<<endl
            <<"3 - Gravar"<<endl
            <<"4 - Sair"<<endl;
        cin>>op;
        switch (op){
        case 1:
            MenuCad();
            break;
        case 2: 
            MenuExec();
            break;
        case 3:
            MenuGravar();
            break;
        case 4:
            return;
            break;
        default:
            cout<<"Opcao invalida"<<endl;
            break;
        }
    }
}

void Principal::MenuCad(){
    int op = -1;


    while(op != 5){
        cout<<"Escolha o que deseja cadastrar:"<<endl<<endl<<endl
            <<"1 - Universidade"<<endl
            <<"2 - Departamento"<<endl
            <<"3 - Disciplina"<<endl
            <<"4 - Aluno"<<endl
            <<"5 - Sair"<<endl;
        cin>>op;
        switch (op){
        case 1:
            CadUni();
                break;
        case 2:
            CadDpto();
                break;
        case 3:
            CadDisci();
                break;
        case 4:
            CadAluno();
                break;
        case 5:
            return;
                break;
        default:
            cout<<endl<<endl<<"Escolha invalida, insira novamente:"<<endl<<endl;
            break;
        }
    }
}

void Principal::CadUni(){
char nome[30];
Universidade* pUniv = nullptr;

    cout<<"Digite o nome da Universidade:"<<endl;        cin>>nome;
    pUniv = new Universidade(nome); 
    Universidades->inserirUni(pUniv);    pUniv = nullptr;
    cout<<"Universidade cadastrada com sucesso!"<<endl;
}

void Principal::CadDpto(){
 char nome[30];
 Universidade* pUniv = nullptr;
 Departamento* pDpto = nullptr;

    cout<<"Digite o nome da universidade onde esta o departamento:"<<endl; cin>>nome;
            pUniv = Universidades->localizarUni(nome);  
            if(pUniv == nullptr){
                cout<<"Universidade Inexistente, retornando";
                return;
                }
            else{
            cout<< "Digite o nome do Departamento:"<<endl;      cin>>nome;      pDpto = new Departamento(nome);
            pDpto->setUni(pUniv);  Departamentos->addDpto(pDpto); pUniv->addDpto(pDpto);   pUniv = nullptr; pDpto = nullptr;
            cout<<"Departamento cadastrado com sucesso!"<<endl;
            }
}

void Principal::CadDisci(){
char nome[30];
Departamento* pDpto = nullptr;
Disciplina* pDisci = nullptr;
    
    cout<<"Digite o nome do Departamento em que se encontra a Disciplina:"<<endl;       cin>>nome;
     pDpto = Departamentos->LocalizarDpto(nome);
     if(pDpto == nullptr){
        cout<<"Departamento nao encontrado, retornando."<<endl;
        return;
     }
     if(pDpto != nullptr){
        cout<<"Digite o nome da disciplina:"<<endl;     cin>>nome;
        pDisci = new Disciplina(nome); pDisci->setDpto(pDpto);  pDpto->addDisci(pDisci);
        Disciplinas->addDisci(pDisci); pDisci = nullptr; pDpto = nullptr;
        cout<<"Disciplina inserida com sucesso"<<endl;
     }
}

void Principal::CadAluno(){
char nome[30];
Disciplina* pDisci = nullptr;
Aluno* pAluno = nullptr;

    cout<<"Digite o nome da disciplina que o aluno esta matriculado"<<endl; cin>>nome;
    pDisci = Disciplinas->localizarDisci(nome);
    if(pDisci == nullptr){cout<<"Disciplina nao encontrada, retornando"<<endl; return;}
    if(pDisci != nullptr){
        cout<<"Digite o nome do aluno:"<<endl;      cin>>nome;      pAluno = new Aluno(); pAluno->setNome(nome);
        Alunos->addAluno(pAluno); pAluno = nullptr; pDisci = nullptr;
        cout<<"Aluno inserido com sucesso!"<<endl;
    }
}

void Principal::Executar(){
    Menu();
}

void Principal::MenuExec(){
int op = -1;

    while(op != 5){
        cout<<"Escolha o que deseja listar:"<<endl<<endl
            <<"1 - Universidades."<<endl
            <<"2 - Departamentos."<<endl
            <<"3 - Disciplinas."<<endl
            <<"4 - Alunos."<<endl
            <<"5 - Sair."<<endl;
    cin >> op;

    switch (op){
    case 1:
        Universidades->Liste();
        break;
    case 2:
        Departamentos->Liste();
        break;
    case 3:
        Disciplinas->Liste();
        break;
    case 4:
        Alunos->Liste();
        break;
    case 5:
        return;
        break;
    default:
        cout<<"Opcao Invalida! Digite novamente"<<endl;
        break;
    }
}
}

void Principal::MenuGravar(){
    
int op = -1;

    while(op != 6){
        cout<<"Escolha o que deseja gravar:"<<endl<<endl
            <<"1 - Universidades."<<endl
            <<"2 - Departamentos."<<endl
            <<"3 - Disciplinas."<<endl
            <<"4 - Alunos."<<endl
            <<"5 - Tudo."<<endl
            <<"6 - Sair."<<endl;
            cin >> op;
        
        switch (op){
        case 1:
            GravarUniversidades();
            break;
        case 2:
            GravarDepartamentos();
            break;
        case 3:
            GravarDisciplinas();
            break;
        case 4:
            GravarAlunos();
            break;
        case 5:
            GravarTudo();
            break;
        case 6:
            return;
            break;        
        default:
            cerr<<"Opcao invalida"<<endl;
            break;
        }
    }
}

void Principal::GravarUniversidades(){
    Universidades->GravarUnis();
}

void Principal::GravarDepartamentos(){
    Departamentos->GraveDepartamentos();
}

void Principal::GravarDisciplinas(){
    Disciplinas->GravarDisciplinas();
}

void Principal::GravarAlunos(){
    Alunos->GraveAlunos();
}

void Principal::GravarTudo(){
    GravarUniversidades();      GravarDepartamentos();
    GravarDisciplinas();        GravarAlunos();
}

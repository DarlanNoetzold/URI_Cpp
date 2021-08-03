#include <bits/stdc++.h>
using namespace std;

#include "fila-dinamica-pessoa.hpp"
#include "fila-dinamica-empresa.hpp"
#include "pilha-dinamica-fichaDoacao.hpp"
#include "pilha-dinamica-objetos.hpp"

#include "Estruturas.hpp"


void incluirPessoa(FilaPessoa *filaPessoa){
    char auxB;
    string auxS;
    Pessoa p1;
    bool valido=false;
    fflush(stdin);
    cout<<"Digite o nome completo: "<<endl;
    cin>>p1.nomeCompleto;
    fflush(stdin);
    do{
        cout<<"Digite o sexo (feminino, masculino)"<<endl;
        cin>>auxS;
        if(auxS == "feminino" || auxS == "masculino"){
            p1.sexo = auxS;
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);

    do{
        cout<<"Digite o CPF: (11 caracteres)"<<endl;
        cin>>p1.CPF;
        if(p1.CPF.size() == 11){
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);
    
    cout<<"Digite o idade: "<<endl;
    cin>>p1.idade;
    do{
        cout<<"Eh deficiente fisico: (s/n) "<<endl;
        cin>>auxB;
        if(auxB == 's'){
            p1.defFisico = true;
            valido = true;
        }else if(auxB =='n'){
            p1.defFisico = false;
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);

    do{
        cout<<"Eh gestante: (s/n) "<<endl;
        cin>>auxB;
        if(auxB == 's'){
            p1.gestante = true;
            valido = true;
        }else if(auxB =='n'){
            p1.gestante = false;
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);
    enfileiraFilaPessoa(*(&filaPessoa), p1);
}

void incluirEmpresa(FilaEmpresa *filaEmpresa){
    char auxB;
    string auxS;
    Empresa p1;
    bool valido=false;
    fflush(stdin);
    cout<<"Digite o nome da empresa: "<<endl;
    cin>>p1.nome;
    fflush(stdin);
    do{
        cout<<"Digite o tipo (livros, equipamentos)"<<endl;
        cin>>auxS;
        if(auxS == "livros" || auxS == "equipamentos"){
            p1.tipo = auxS;
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);

    do{
        cout<<"Digite o CNPJ: (14 caracteres)"<<endl;
        cin>>p1.CNPJ;
        if(p1.CNPJ.size() == 14){
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);
    enfileiraFilaEmpresa(*(&filaEmpresa), p1);
}

void atendePessoa(FilaPessoa *filaPessoa, PilhaFichaDoacao *pilhaFichaDoacao, PilhaObjeto *pilhaLivros, PilhaObjeto *pilhaEquipamentos){
    bool valido = false;
    Pessoa valor;
    desenfileiraFilaPessoa(*(&filaPessoa), &valor);
    FichaDoacao fichaDoacao;
    fichaDoacao.pessoa = valor;
    Objeto objeto;
    string auxS;
    do{
        cout<<"Digite o tipo (livro, equipamento)"<<endl;
        cin>>auxS;
        if(auxS == "livro" || auxS == "equipamento"){
            objeto.tipo = auxS;
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);

    cout<<"Digite a descricao: "<<endl;
    cin>>objeto.descricao;

    fichaDoacao.objeto = objeto;
    empilhaFichaDoacao(*(&pilhaFichaDoacao), fichaDoacao);
    if(objeto.tipo == "livro"){
        empilhaObjeto(*(&pilhaLivros), objeto);
    }else if(objeto.tipo == "equipamento"){
        empilhaObjeto(*(&pilhaEquipamentos), objeto);
    }
    
    ofstream escreve("doacao.txt",ios::app);
    escreve << fichaDoacao.pessoa.nomeCompleto <<" # "<< fichaDoacao.pessoa.sexo <<" # "<< fichaDoacao.pessoa.CPF <<" # "<< fichaDoacao.pessoa.idade <<" # DEF_"<< fichaDoacao.pessoa.defFisico <<" # GEST_"<< fichaDoacao.pessoa.gestante <<" # OBJ_"<< objeto.tipo <<" # "<<objeto.descricao<<"\n";
    escreve.close();
}


main(){

    cout<<"Inicializando filas:"<<endl;
    FilaPessoa filaPessoa;
    inicializaFilaPessoa(&filaPessoa);
    FilaEmpresa filaEmpresa;
    inicializaFilaEmpresa(&filaEmpresa);

    cout<<"Inicializando pilhas:"<<endl;
    PilhaFichaDoacao pilhaFichaDoacao;
    inicializaFichaDoacao(&pilhaFichaDoacao);
    PilhaObjeto pilhaLivros;
    inicializaObjeto(&pilhaLivros);
    PilhaObjeto pilhaEquipamentos;
    inicializaObjeto(&pilhaEquipamentos);

    int valor;
    int menu = -1, indice = 0;
    do{
        system("cls");
        cout << "#########MENU#########" << endl;
        cout << "# 0 - Sair           #" << endl;
        cout << "# 1 - A              #" << endl;
        cout << "# 2 - B              #" << endl;
        cout << "# 3 - C              #" << endl;
        cout << "######################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                cout<<"Enfielirando pessoa..."<<endl;
                incluirPessoa(&filaPessoa);
                getchar();
                break;
            case 2 :
                system("cls");
                cout<<"Enfielirando empresa..."<<endl;
                incluirEmpresa(&filaEmpresa);
                getchar();
                break;
            case 3 :
                system("cls");
                cout<<"Atendendo pessoa..."<<endl;
                atendePessoa(&filaPessoa, &pilhaFichaDoacao, &pilhaLivros, &pilhaEquipamentos);
                getchar();
                break;
            case 4 :
                system("cls");

                getchar();
                break;
            case 5 :
                system("cls");

                getchar();
                break;
            case 6 :
                system("cls");

                getchar();
                break;
        };

    }while(menu != 0);
}

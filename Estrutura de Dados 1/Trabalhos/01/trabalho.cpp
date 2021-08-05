#include <bits/stdc++.h>
using namespace std;

#include "fila-dinamica-pessoa.hpp"
#include "fila-dinamica-empresa.hpp"
#include "pilha-dinamica-fichaDoacao.hpp"
#include "pilha-dinamica-objetos.hpp"

#include "Estruturas.hpp"


void incluirPessoa(FilaPessoa *filaPessoa, FilaPessoa *filaPessoaPrioritarias){
    char auxB;
    string auxS;
    Pessoa p1;
    bool valido=false;
    cout<<"Digite o nome completo: "<<endl;
    cin>>p1.nomeCompleto;
    fflush(stdin);
    do{
        cout<<"Digite o sexo (feminino, masculino)"<<endl;
        cin>>auxS;
        fflush(stdin);
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
        fflush(stdin);
        if(p1.CPF.size() == 11){
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);
    
    cout<<"Digite o idade: "<<endl;
    cin>>p1.idade;
    fflush(stdin);
    do{
        cout<<"Eh deficiente fisico: (s/n) "<<endl;
        cin>>auxB;
        fflush(stdin);
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
        fflush(stdin);
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

    if(p1.gestante || p1.defFisico || p1.idade > 65){
        enfileiraFilaPessoa(*(&filaPessoaPrioritarias), p1);
    }else{
        enfileiraFilaPessoa(*(&filaPessoa), p1);
    }
}

void incluirEmpresa(FilaEmpresa *filaEmpresa, FilaEmpresa *filaEmpresaPrioritarias){
    char auxB;
    string auxS;
    Empresa p1;
    bool valido=false;
    fflush(stdin);
    cout<<"Digite o nome da empresa: "<<endl;
    cin>>p1.nome;
    fflush(stdin);
    do{
        cout<<"Digite o tipo (livro, equipamento)"<<endl;
        cin>>auxS;
        fflush(stdin);
        if(auxS == "livro" || auxS == "equipamento"){
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
        fflush(stdin);
        if(p1.CNPJ.size() == 14){
            valido = true;
        }else{
            cout<<"Valor invalido!"<<endl;
            valido = false;
        }
    }while(!valido);

    if(p1.tipo == "livro"){
        enfileiraFilaEmpresa(*(&filaEmpresaPrioritarias), p1);
    }else{
        enfileiraFilaEmpresa(*(&filaEmpresa), p1);
    }
}

void atendePessoa(FilaPessoa *filaPessoa, PilhaFichaDoacao *pilhaFichaDoacao, PilhaObjeto *pilhaLivros, PilhaObjeto *pilhaEquipamentos, FilaPessoa *filaPessoaPrioritarias){
    bool valido = false;
    Pessoa valor;
    FichaDoacao fichaDoacao;
    Objeto objeto;
    string auxS;
    if(!vaziaFilaPessoa(filaPessoaPrioritarias)){
        desenfileiraFilaPessoa(*(&filaPessoaPrioritarias), &valor);
        fichaDoacao.pessoa = valor;
        do{
            cout<<"Digite o tipo (livro, equipamento)"<<endl;
            cin>>auxS;
            fflush(stdin);
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
        fflush(stdin);

        fichaDoacao.objeto = objeto;
        empilhaFichaDoacao(*(&pilhaFichaDoacao), fichaDoacao);
        if(objeto.tipo == "livro"){
            empilhaObjeto(*(&pilhaLivros), objeto);
        }else if(objeto.tipo == "equipamento"){
            empilhaObjeto(*(&pilhaEquipamentos), objeto);
        }
        ofstream escreve("doacao.txt",ios::app);
        escreve << fichaDoacao.pessoa.nomeCompleto <<"#"<< fichaDoacao.pessoa.sexo <<"#"<< fichaDoacao.pessoa.CPF <<"#"<< fichaDoacao.pessoa.idade <<"#DEF_"<< fichaDoacao.pessoa.defFisico <<"#GEST_"<< fichaDoacao.pessoa.gestante <<"#OBJ_"<< objeto.tipo <<"#"<<objeto.descricao<<"\n";
        escreve.close();
    }else if(!vaziaFilaPessoa(filaPessoa)){
        desenfileiraFilaPessoa(*(&filaPessoa), &valor);
        fichaDoacao.pessoa = valor;
        do{
            cout<<"Digite o tipo (livro, equipamento)"<<endl;
            cin>>auxS;
            fflush(stdin);
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
        fflush(stdin);

        fichaDoacao.objeto = objeto;
        empilhaFichaDoacao(*(&pilhaFichaDoacao), fichaDoacao);
        if(objeto.tipo == "livro"){
            empilhaObjeto(*(&pilhaLivros), objeto);
        }else if(objeto.tipo == "equipamento"){
            empilhaObjeto(*(&pilhaEquipamentos), objeto);
        }
        ofstream escreve("doacao.txt",ios::app);
        escreve << fichaDoacao.pessoa.nomeCompleto <<"#"<< fichaDoacao.pessoa.sexo <<"#"<< fichaDoacao.pessoa.CPF <<"#"<< fichaDoacao.pessoa.idade <<"#DEF_"<< fichaDoacao.pessoa.defFisico <<"#GEST_"<< fichaDoacao.pessoa.gestante <<"#OBJ_"<< objeto.tipo <<"#"<<objeto.descricao<<"\n";
        escreve.close();
    }else{
        cout<<"Nao tem mais pessoas!"<<endl;
        getchar();
    }
 
}


void atendeEmpresa(FilaEmpresa *filaEmpresa, FilaEmpresa *filaEmpresaPrioritarias, PilhaObjeto *pilhaLivros, PilhaObjeto *pilhaEquipamentos){
    Objeto objeto;
    int quant=0;
    string verifica;
    Empresa empresa;

    if(!vaziaFilaEmpresa(filaEmpresaPrioritarias)){
        desenfileiraFilaEmpresa(*(&filaEmpresaPrioritarias), &empresa);
        cout<<"Quantos objeto serao retirado: "<<endl;
        cin>>quant;
        fflush(stdin);

        cout<<"Qual o tipo de retirada: (voce esta em priridade entao deve ser livro)"<<endl;
        cin>>verifica;
        fflush(stdin);

        if(verifica == empresa.tipo){
            for(int i = 0; i < quant; i++){
                if(desempilhaObjeto(*(&pilhaLivros), &objeto)){
                ofstream escreve("retirada.txt",ios::app);
                escreve << empresa.nome <<"#"<< empresa.CNPJ <<"#TRANS_"<< empresa.tipo <<"#OBJ_"<< objeto.tipo <<"#"<<objeto.descricao<<"\n";
                escreve.close();
                cout<<"Livro Retirado"<<endl;
                getchar();
                }else{
                    cout<<"Acabaram os livros a serem retirados"<<endl;
                    getchar();
                }
            }
        }else{
            cout<<"Tipo errado!"<<endl;
            getchar();
        }
    }else if(!vaziaFilaEmpresa(filaEmpresa)){
        desenfileiraFilaEmpresa(*(&filaEmpresa), &empresa);
        cout<<"Quantos objeto serao retirado: "<<endl;
        cin>>quant;
        fflush(stdin);

        cout<<"Qual o tipo de retirada: (voce nao esta em prioridade entao deve ser equipamento)"<<endl;
        cin>>verifica;
        fflush(stdin);

        if(verifica == empresa.tipo){
            for(int i = 0; i < quant; i++){
                if(desempilhaObjeto(*(&pilhaEquipamentos), &objeto)){
                ofstream escreve("retirada.txt",ios::app);
                escreve << empresa.nome <<"#"<< empresa.CNPJ <<"#TRANS_"<< empresa.tipo <<"# OBJ_"<< objeto.tipo <<"#"<<objeto.descricao<<"\n";
                escreve.close();
                cout<<"Equipamento Retirado"<<endl;
                getchar();
                }else{
                    cout<<"Acabaram os equipamentos a serem retiados"<<endl;
                    getchar();
                }
            }
        }else{
            cout<<"Tipo errado!"<<endl;
            getchar();
        }
    }else{
        cout<<"Acabaram as empresas!"<<endl;
        getchar();
    }
}

void imprimeLivros(PilhaObjeto *pilhaLivros){
    PilhaObjeto aux;
    Objeto valor;
    while(!vaziaObjeto(*(&pilhaLivros))){
        desempilhaObjeto(*(&pilhaLivros), &valor);
        empilhaObjeto(&aux, valor);
        
    }

    while(!vaziaObjeto(&aux)){
        desempilhaObjeto(&aux, &valor);
        cout<<"Livro: "<<valor.descricao<<endl;
        empilhaObjeto(*(&pilhaLivros), valor);
    }
}

void listaDocao(){
    char linha[300];
    char partes[12];
    int aux=0, soma=0;
    Pessoa pessoaContagem;
    Objeto obj;
    FilaPessoa filaPessoasContagem;
    ifstream ler("doacao.txt", ios::in);
    while (!ler.fail()){
        aux++;

        ler.getline(partes, 12, '#');
        pessoaContagem.nomeCompleto = partes;
        cout<<pessoaContagem.nomeCompleto<<endl;
        ler.getline(partes, 12, '#');
        pessoaContagem.sexo = partes;
        cout<<pessoaContagem.sexo<<endl;
        ler.getline(partes, 12, '#');
        pessoaContagem.CPF = partes;
        cout<<pessoaContagem.CPF<<endl;
        ler.getline(partes, 12, '#DEF_');
        pessoaContagem.idade = atoi(partes);
        cout<<pessoaContagem.idade<<endl;
        ler.getline(partes, 12, '#GEST_');
        pessoaContagem.defFisico = atoi(partes);
        cout<<pessoaContagem.defFisico<<endl;
        ler.getline(partes, 12, '#OBJ_');
        pessoaContagem.gestante = atoi(partes);
        cout<<pessoaContagem.gestante<<endl;

        ler.getline(partes, 12, '#');
        obj.tipo = partes;
        cout<<obj.tipo;
        ler.getline(partes, 12, '\n');
        obj.descricao = partes;
        cout<<obj.descricao;


        enfileiraFilaPessoa(&filaPessoasContagem, pessoaContagem);
        mostraFilaPessoa(&filaPessoasContagem);
        getchar();
        
    }

    cout << "\nSoma: " << soma << endl;
    getchar();
    ler.close();
}

main(){
    cout<<"Inicializando filas:"<<endl;
    FilaPessoa filaPessoa;
    inicializaFilaPessoa(&filaPessoa);
    FilaPessoa filaPessoaPrioritarias;
    inicializaFilaPessoa(&filaPessoaPrioritarias);
    FilaEmpresa filaEmpresa;
    inicializaFilaEmpresa(&filaEmpresa);
    FilaEmpresa filaEmpresaPrioritarias;
    inicializaFilaEmpresa(&filaEmpresaPrioritarias);


    cout<<"Inicializando pilhas:"<<endl;
    PilhaFichaDoacao pilhaFichaDoacao;
    inicializaFichaDoacao(&pilhaFichaDoacao);
    PilhaObjeto pilhaLivros;
    inicializaObjeto(&pilhaLivros);
    PilhaObjeto pilhaEquipamentos;
    inicializaObjeto(&pilhaEquipamentos);

    int valor;
    int indice = 0;
    char menu;
    do{
        system("cls");
        cout << "#########MENU##########" << endl;
        cout << "# 0  - Sair           #" << endl;
        cout << "# 1  - A              #" << endl;
        cout << "# 2  - B              #" << endl;
        cout << "# 3  - C              #" << endl;
        cout << "# 4  - D              #" << endl;
        cout << "# 5  - E              #" << endl;
        cout << "# 6  - F              #" << endl;
        cout << "# 7  - G              #" << endl;
        cout << "# 8  - H              #" << endl;
        cout << "# 9  - I              #" << endl;
        cout << "# 10 - J              #" << endl;
        cout << "#######################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case '0' :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case '1' :
                system("cls");
                cout<<"Enfielirando pessoa..."<<endl;
                incluirPessoa(&filaPessoa, &filaPessoaPrioritarias);
                getchar();
                break;
            case '2' :
                system("cls");
                cout<<"Enfielirando empresa..."<<endl;
                incluirEmpresa(&filaEmpresa, &filaEmpresaPrioritarias);
                getchar();
                break;
            case '3' :
                system("cls");
                cout<<"Atendendo pessoa..."<<endl;
                atendePessoa(&filaPessoa, &pilhaFichaDoacao, &pilhaLivros, &pilhaEquipamentos, &filaPessoaPrioritarias);
                getchar();
                break;
            case '4' :
                system("cls");
                cout<<"Atendendo empresa..."<<endl;
                atendeEmpresa(&filaEmpresa, &filaEmpresaPrioritarias, &pilhaLivros, &pilhaEquipamentos);
                getchar();
                break;
            case '5' :
                system("cls");
                cout<<"Pessoas prioritarias: "<<endl;
                mostraFilaPessoa(&filaPessoaPrioritarias);
                cout<<endl;
                cout<<"Pessoas nao prioritarias: "<<endl;
                mostraFilaPessoa(&filaPessoa);
                getchar();
                break;
            case '6' :
                system("cls");
                cout<<"Empresas prioritarias: "<<endl;
                mostraFilaEmpresa(&filaEmpresaPrioritarias);
                cout<<endl;
                cout<<"Empresas nao prioritarias: "<<endl;
                mostraFilaEmpresa(&filaEmpresa);
                getchar();
                break;
            case '7' :
                system("cls");
                cout<<"Informacoes de pessoas unificadas: "<<endl;
                mostraFilaPessoaUnificada(&filaPessoaPrioritarias, &filaPessoa);
                getchar();
                break;
            case '8' :
                system("cls");
                cout<<"Informacoes de empresas unificadas: "<<endl;
                mostraFilaEmpresaUnificada(&filaEmpresaPrioritarias, &filaEmpresa);
                getchar();
                break;
            case '9' :
                system("cls");
                cout<<"Imprimindo livros em ordem de doacao: "<<endl;
                imprimeLivros(&pilhaLivros);
                getchar();
                break;
            case 'J' :
                system("cls");
                listaDocao();
                getchar();
                break;
            default:
                system("cls");
                cout<<"Não temos essa opcao!";
                getchar();
                break;
        };

    }while(menu != 0);
}

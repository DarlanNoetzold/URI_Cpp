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
    cin.ignore(0);
    getline(cin, p1.nomeCompleto);
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
    cin.ignore(0);
    getline(cin, p1.nome);
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
        cin.ignore(0);
        getline(cin, objeto.descricao);
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
        cin.ignore(0);
        getline(cin, objeto.descricao);
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

        do{
            cout<<"Qual o tipo de retirada: (voce esta em priridade entao deve ser livro)"<<endl;
            cin>>verifica;
            fflush(stdin);
        }while(verifica != empresa.tipo);
        

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

        do{
            cout<<"Qual o tipo de retirada: (voce nao esta em prioridade entao deve ser equipamento)"<<endl;
            cin>>verifica;
            fflush(stdin);
        }while(verifica != empresa.tipo);


        if(verifica == empresa.tipo){
            for(int i = 0; i < quant; i++){
                if(desempilhaObjeto(*(&pilhaEquipamentos), &objeto)){
                ofstream escreve("retirada.txt",ios::app);
                escreve << empresa.nome <<"#"<< empresa.CNPJ <<"#TRANS_"<< empresa.tipo <<"#OBJ_"<< objeto.tipo <<"#"<<objeto.descricao<<"\n";
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

void imprimeObj(PilhaObjeto *pilhaObj){
    PilhaObjeto aux;
    Objeto valor;
    while(!vaziaObjeto(*(&pilhaObj))){
        desempilhaObjeto(*(&pilhaObj), &valor);
        empilhaObjeto(&aux, valor);
        
    }

    while(!vaziaObjeto(&aux)){
        desempilhaObjeto(&aux, &valor);
        cout<<"Objeto: "<<valor.descricao<<endl;
        empilhaObjeto(*(&pilhaObj), valor);
    }

    desalocarObjeto(&aux);
}

void listaDocao(){
    char partes[30];
    int aux=0, contPrioridade=0;
    float soma=0.0;
    Pessoa empresaMostra;
    Objeto obj;
    FilaPessoa filaPessoasContagem;
    ifstream ler("doacao.txt", ios::in);
    while (!ler.fail()){
        ler.getline(partes, 30, '#');
        empresaMostra.nomeCompleto = partes;
        if(empresaMostra.nomeCompleto == ""){
            break;
        }
        cout<<"Nome: "<<empresaMostra.nomeCompleto<<endl;
        ler.getline(partes, 30, '#');
        empresaMostra.sexo = partes;
        cout<<"Sexo: "<<empresaMostra.sexo<<endl;
        ler.getline(partes, 30, '#');
        empresaMostra.CPF = partes;
        cout<<"CPF: "<<empresaMostra.CPF<<endl;
        ler.getline(partes, 30, '#DEF_');
        empresaMostra.idade = atoi(partes);
        cout<<"Idade: "<<empresaMostra.idade<<endl;
        ler.getline(partes, 30, '#GEST_');
        empresaMostra.defFisico = atoi(partes);
        cout<<"Eh deficiente fisico: (sim=1, nao=0) "<<empresaMostra.defFisico<<endl;
        ler.getline(partes, 30, '#OBJ_');
        empresaMostra.gestante = atoi(partes);
        cout<<"Eh gestante: (sim=1, nao=0) "<<empresaMostra.gestante<<endl;

        ler.getline(partes, 30, '#');
        obj.tipo = partes;
        cout<<"Tipo do objeto: "<<obj.tipo<<endl;
        ler.getline(partes, 30, '\n');
        obj.descricao = partes;
        cout<<"Descricao do objeto: "<<obj.descricao<<endl;

        enfileiraFilaPessoa(&filaPessoasContagem, empresaMostra);
        aux++;

        getchar();
        
    }

    while(desenfileiraFilaPessoa(&filaPessoasContagem, &empresaMostra)){
        soma += empresaMostra.idade;

        if(empresaMostra.defFisico || empresaMostra.gestante || empresaMostra.idade > 65){
            contPrioridade++;
        }
    }
    
    cout<<"Tem "<< aux<<" cadastrados!"<<endl;
    cout<<"A media das idades eh: "<< soma/aux<<endl;
    cout<<"Existem "<<contPrioridade<<" pessoas com prioridade."<<endl;

    destroiFilaPessoa(&filaPessoasContagem);
    ler.close();
}

void retornaCPF(string cpfBusca){
    int aux=0;
    char partes[30];
    Pessoa empresaMostra;
    Objeto obj;
    ifstream ler("doacao.txt", ios::in);
    while (!ler.fail()){
        ler.getline(partes, 30, '#');
        empresaMostra.nomeCompleto = partes;
        if(empresaMostra.nomeCompleto == ""){
            break;
        }
        ler.getline(partes, 30, '#');
        empresaMostra.sexo = partes;
        ler.getline(partes, 30, '#');
        empresaMostra.CPF = partes;
        ler.getline(partes, 30, '#DEF_');
        empresaMostra.idade = atoi(partes);
        ler.getline(partes, 30, '#GEST_');
        empresaMostra.defFisico = atoi(partes);
        ler.getline(partes, 30, '#OBJ_');
        empresaMostra.gestante = atoi(partes);
        ler.getline(partes, 30, '#');
        obj.tipo = partes;
        ler.getline(partes, 30, '\n');
        obj.descricao = partes;

        if(empresaMostra.CPF == cpfBusca){
            aux++;
        }        
    }

    cout<<"Existem "<<aux<<" doacoes feitas por este CPF";
    getchar();
    ler.close();
}

void listaRetirada(){
    char partes[30];
    Empresa empresaMostra;
    Objeto obj;
    ifstream ler("retirada.txt", ios::in);
    while (!ler.fail()){
        ler.getline(partes, 30, '#');
        empresaMostra.nome = partes;
        if(empresaMostra.nome == ""){
            break;
        }
        cout<<"Nome: "<<empresaMostra.nome<<endl;
        ler.getline(partes, 30, '#');
        empresaMostra.CNPJ = partes;
        cout<<"CNPJ: "<<empresaMostra.CNPJ<<endl;
        ler.getline(partes, 30, '#');
        empresaMostra.tipo = partes;
        cout<<"Tipo: "<<empresaMostra.CNPJ<<endl;
        
        ler.getline(partes, 30, '#');
        obj.tipo = partes;
        cout<<"Tipo do objeto: "<<obj.tipo<<endl;
        ler.getline(partes, 30, '\n');
        obj.descricao = partes;
        cout<<"Descricao do objeto: "<<obj.descricao<<endl;
        

        getchar(); 
    }

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
    string buscaCPF;
    do{
        system("cls");
        cout << "############MENU###########" << endl;
        cout << "# --------Sair(Q)---------#" << endl;
        cout << "# -----------A------------#" << endl;
        cout << "# -----------B------------#" << endl;
        cout << "# -----------C------------#" << endl;
        cout << "# -----------D------------#" << endl;
        cout << "# -----------E------------#" << endl;
        cout << "# -----------F------------#" << endl;
        cout << "# -----------G------------#" << endl;
        cout << "# -----------H------------#" << endl;
        cout << "# -----------I------------#" << endl;
        cout << "# -----------J------------#" << endl;
        cout << "# -----------K------------#" << endl;
        cout << "# -----------L------------#" << endl;
        cout << "# -----------M------------#" << endl;
        cout << "###########################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case 'Q' :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 'A' :
                system("cls");
                cout<<"Enfielirando pessoa..."<<endl;
                incluirPessoa(&filaPessoa, &filaPessoaPrioritarias);
                getchar();
                break;
            case 'B' :
                system("cls");
                cout<<"Enfielirando empresa..."<<endl;
                incluirEmpresa(&filaEmpresa, &filaEmpresaPrioritarias);
                getchar();
                break;
            case 'C' :
                system("cls");
                cout<<"Atendendo pessoa..."<<endl;
                atendePessoa(&filaPessoa, &pilhaFichaDoacao, &pilhaLivros, &pilhaEquipamentos, &filaPessoaPrioritarias);
                getchar();
                break;
            case 'D' :
                system("cls");
                cout<<"Atendendo empresa..."<<endl;
                atendeEmpresa(&filaEmpresa, &filaEmpresaPrioritarias, &pilhaLivros, &pilhaEquipamentos);
                getchar();
                break;
            case 'E' :
                system("cls");
                cout<<"Pessoas prioritarias: "<<endl;
                mostraFilaPessoa(&filaPessoaPrioritarias);
                cout<<endl;
                cout<<"Pessoas nao prioritarias: "<<endl;
                mostraFilaPessoa(&filaPessoa);
                getchar();
                break;
            case 'F' :
                system("cls");
                cout<<"Empresas prioritarias: "<<endl;
                mostraFilaEmpresa(&filaEmpresaPrioritarias);
                cout<<endl;
                cout<<"Empresas nao prioritarias: "<<endl;
                mostraFilaEmpresa(&filaEmpresa);
                getchar();
                break;
            case 'G' :
                system("cls");
                cout<<"Informacoes de pessoas unificadas: "<<endl;
                mostraFilaPessoaUnificada(&filaPessoaPrioritarias, &filaPessoa);
                getchar();
                break;
            case 'H' :
                system("cls");
                cout<<"Informacoes de empresas unificadas: "<<endl;
                mostraFilaEmpresaUnificada(&filaEmpresaPrioritarias, &filaEmpresa);
                getchar();
                break;
            case 'I' :
                system("cls");
                cout<<"Imprimindo equipamentos em ordem de doacao: "<<endl;
                imprimeObj(&pilhaEquipamentos);
                getchar();
                break;
            case 'J' :
                system("cls");
                cout<<"Imprimindo livros em ordem de doacao: "<<endl;
                imprimeObj(&pilhaLivros);
                getchar();
                break;
            case 'K' :
                system("cls");
                listaDocao();
                getchar();
                break;
            case 'L' :
                system("cls");
                cout<<"Digite o CPF a ser buscado: ";
                cin>>buscaCPF;
                retornaCPF(buscaCPF);
                getchar();
                break;
            case 'M' :
                system("cls");
                listaRetirada();
                getchar();
                break;
            default:
                system("cls");
                cout<<"Não temos essa opcao!";
                getchar();
                break;
        };

    }while(menu != 'Q');
}

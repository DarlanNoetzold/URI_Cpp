#include <bits/stdc++.h>
using namespace std;

#include "lista.hpp"

void alimentaLista(No **lista){
    int tamPilha, valor, posicao;

    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Criar lista                #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover                    #" << endl;
        cout << "# 4 - Consultar                  #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
        cout << "##################################" << endl;
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
                
                if(indice == 0){
                    inicializaL(*(&lista));
                    indice++;
                }else{
                    destroiL(*(&lista));
                    inicializaL(*(&lista));
                    indice++;
                }
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma lista"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    if(insereL(*(&lista), valor)){
                        cout<<"valor inserido!"<<endl;
                        getchar();
                    }
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a fila!"<<endl;
                }else{
                    cout<<"Digite o valor a ser removido: ";
                    cin>>valor;
                    if(removeL(*(&lista), valor)){
                        cout<<"Valor removido: "<<valor<<endl;
                    }else{
                        cout<<"Valor não encontrado!"<<endl;
                    }
                }
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a fila!"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    if(buscaL(*(&lista), valor)){
                        cout << "O valor " << valor << " foi encontrado na pilha!\n";
                        getchar();
                    }else{
                        cout << "O valor " << valor << " NAO foi encontrado na pilha!\n";
                        getchar();
                    }
                }
                getchar();
                break;
            case 5 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    mostraL(*(&lista));
                }
                getchar();
                break;
            case 6 :
                system("cls");
                    if(indice < 0){
                        cout << "E necessario criar uma lista"<<endl;
                    }else{
                        cout<<"Digite o valor: ";
                        cin>>valor;
                        cout<<"Digite a posicao: ";
                        cin>>posicao;
                        if(inserePosicaoL(*(&lista), valor, posicao)){
                            cout<<"valor inserido!"<<endl;
                            getchar();
                        }
                    }
                    getchar();
                    break;
        };

    }while(menu != 0);
}

main(){
    setlocale(LC_ALL, "Portuguese");

    No* li1;
    No* li2;
    
    int menu = -1, indice = 0, opL=0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Alimentar lista            #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover                    #" << endl;
        cout << "# 4 - Consultar                  #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
        cout << "##################################" << endl;
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
                cout<<"Digite qual lista voce deseja alimentar: (0 ou 1) ";
                cin>>opL;
                if(opL == 0){
                    alimentaLista(&li1);
                }else if(opL == 1){
                    alimentaLista(&li2);
                }else{
                    cout<<"Nao temos esta lista!";
                }
                getchar();
                break;
            case 2 :
                system("cls");
                
                getchar();
                break;
            case 3 :
                system("cls");
                
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

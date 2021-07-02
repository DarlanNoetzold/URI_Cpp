#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"
#include "caixa.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    int tamPilha;
    Caixa valor;

    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Criar Pilha                #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover                    #" << endl;
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
                    cout<<"Digite o tamanho da pilha: ";
                    cin>>tamPilha;
                    inicializa(&p1, tamPilha);
                    indice++;
                }else{
                    desalocar(&p1);
                    cout<<"Digite o tamanho da pilha: ";
                    cin>>tamPilha;
                    inicializa(&p1, tamPilha);
                    indice++;
                }
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma pilha"<<endl;
                }else{
                    cout<<"Digite o Codigo da caixa: ";
                    cin>>valor.codigo;
                    cout<<"Digite o peso da caixa: ";
                    cin>>valor.peso;
                    if(empilhar(&p1, valor)){
                        cout<<"valor inserido!"<<endl;
                        getchar();
                    }else{
                        cout<<"pilha cheia ou valor j? existente"<<endl;
                        getchar();
                    }
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a pilha!"<<endl;
                }else{
                    if(desempilhar(&p1, &valor)){
                        cout<<"O valor desempilhado "<<valor.codigo<<endl;
                    }else{
                        cout<<"pilha vazia"<<endl;
                    }
                }
                getchar();
                break;

            case 4 :
                system("cls");
                
                getchar();
                break;
            case 5 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    mostrar(&p1);
                }
                getchar();
                break;
        };

    }while(menu != 0);
    
    desalocar(&p1);
}

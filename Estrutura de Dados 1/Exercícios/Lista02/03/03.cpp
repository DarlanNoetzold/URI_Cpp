#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

void rotina(Pilha p, int *indiceP, int **vet, int t){
    int valor;
    int menu = -1, indice = 0;
    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Criar Pilha                #" << endl;
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
                    inicializa(&p, 5);
                    indice++;
                }else{
                    desalocar(&p);
                    inicializa(&p, 5);
                    indice++;
                }
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma pilha"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    if(!(buscar(&p, valor)) && empilhar(&p, valor)){
                        cout<<"valor inserido!"<<endl;
                        if(t == 1){
                            (*vet)[*indiceP] = valor;
                        }
                        getchar();
                    }else{
                        cout<<"pilha cheia ou valor ja existente"<<endl;
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
                    if(desempilhar(&p, &valor)){
                        cout<<"O valor desempilhado "<<valor<<endl;
                    }else{
                        cout<<"pilha vazia"<<endl;
                    }
                }
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    if(buscar(&p, valor)){
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
                    mostrar(&p);
                }
                getchar();
                break;
        };

    }while(menu != 0);
}

main(){
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    Pilha p2;
    int *vet = new int[10];
    int pilha = 0;
    int indiceP1 = 0, indiceP2=0;
    do{
        cout<<"Voce deseja administrar qual pilha? 1, 2 ou 0 para sair: ";
        cin>>pilha;
        if(pilha == 1){
            rotina(p1, &indiceP1, &vet, 1);
        }else if(pilha == 2){
            rotina(p2, &indiceP2, &vet, 2);
        }
    }while(pilha != 0);

    
    desalocar(&p1);
    desalocar(&p2);
}

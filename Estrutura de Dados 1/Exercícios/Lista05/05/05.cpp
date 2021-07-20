#include <bits/stdc++.h>
using namespace std;

#include "pilha-dinamica.hpp"
#include "filacircular.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    Fila fPrimo, fPar, fImpar;
    inicializaF(&fPar, 10);
    inicializaF(&fImpar, 10);
    inicializaF(&fPrimo, 10);
    Pilha p1;
    int  valor, novoValor, aux=0;

    int menu = -1, indice = 0, indiceVal=0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Criar Pilha                #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover                    #" << endl;
        cout << "# 4 - Consultar                  #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
        cout << "# 5 - Mostrar Filas              #" << endl;
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
                    inicializa(&p1);
                    indice++;
                }else{
                    desalocar(&p1);
                    inicializa(&p1);
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
                    cin>>novoValor;
                    empilhar(&p1, novoValor);
                    
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a pilha!"<<endl;
                }else{
                    if(desempilhar(&p1, &valor)){
                        cout<<"O valor desempilhado "<<valor<<endl;
                        if(valor % 2 == 0){
                            enfileiraF(&fPar, valor);
                        }else if(valor % 2 == 1){
                            enfileiraF(&fImpar, valor);
                        }

                        for(int i =1; i <= valor; i++){
                            if(valor % i == 0 && i != 1 && i != 0 && i != valor){
                                aux++;
                                cout<<"teste: "<<endl;
                            }
                        }

                        if(aux == 0){
                            enfileiraF(&fPrimo, valor);
                        }
                        aux=0;
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
                    if(buscar(&p1, valor)){
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
                    mostrar(&p1);
                }
                getchar();
                break;
            case 6 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    cout<<"\nPar: ";
                    mostraF(&fPar);
                    cout<<"\nImpar: ";
                    mostraF(&fImpar);
                    cout<<"\nPrimo: ";
                    mostraF(&fPrimo);
                }
                getchar();
        };

    }while(menu != 0);
    
    desalocar(&p1);
}






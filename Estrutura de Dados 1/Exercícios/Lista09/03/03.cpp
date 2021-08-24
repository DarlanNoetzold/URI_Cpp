#include <bits/stdc++.h>
using namespace std;

#include "lista.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    No* l1;
    No* aux;
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
        cout << "# 6 - Insere Pocicao             #" << endl;
        cout << "# 7 - Verifica ordenacao         #" << endl;
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
                    inicializaL(&l1);
                    indice++;
                }else{
                    destroiL(&l1);
                    inicializaL(&l1);
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
                    if(insereL(&l1, valor)){
                        cout<<"valor inserido!"<<endl;
                        getchar();
                    }
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a lista!"<<endl;
                }else{
                    cout<<"Digite o valor a ser removido: ";
                    cin>>valor;
                    if(removeL(&l1, valor)){
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
                    if(buscaL(&l1, valor)){
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
                    cout<<"Inicialize primeiro a lista!"<<endl;
                }else{
                    mostraL(&l1);
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
                        if(inserePosicaoL(&l1, valor, posicao)){
                            cout<<"valor inserido!"<<endl;
                            getchar();
                        }
                    }
                    getchar();
                    break;
            case 7 :
                system("cls");
                    if(indice < 0){
                        cout << "E necessario criar uma lista"<<endl;
                    }else{
                        
                    }
                    getchar();
                    break;
        };

    }while(menu != 0);
    
    destroiL(&l1);
}

#include <bits/stdc++.h>
using namespace std;

#include "lista.hpp"

int alimentaLista(No **lista, int indice){
    int valor, posicao;

    char menu;

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
        cout << "# 7 - Insere Ordenado            #" << endl;
        cout << "# 8 - Insere Final               #" << endl;
        cout << "# 9 - Total                      #" << endl;
        cout << "# A - Le a posicao               #" << endl;
        cout << "# B - Remove a posicao           #" << endl;
        cout << "##################################" << endl;
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
            case '2' :
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
            case '3' :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a lista!"<<endl;
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

            case '4' :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a lista!"<<endl;
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
            case '5' :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a lista!"<<endl;
                }else{
                    mostraL(*(&lista));
                }
                getchar();
                break;
            case '6' :
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
            case '7' :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma lista"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    insereOrdenado(*(&lista), valor);
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case '8' :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma lista"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    insereFinal(*(&lista), valor);
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case '9' :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma lista"<<endl;
                }else{
                    cout<<"Total: "<<total(*(&lista));
                }
                getchar();
                break;
            case 'A' :
                system("cls");
                    if(indice < 0){
                        cout << "E necessario criar uma lista"<<endl;
                    }else{
                        cout<<"Digite a posicao: ";
                        cin>>posicao;
                        if(lePosicao(*(&lista), posicao, &valor)){
                            cout<<"Valor: "<<valor<<endl;
                            getchar();
                        }else{
                            cout<<"Algo de errado!"<<endl;
                            getchar();
                        }
                    }
                    getchar();
                    break;
                case 'B' :
                    system("cls");
                    if(indice < 0){
                        cout << "E necessario criar uma lista"<<endl;
                    }else{
                        cout<<"Digite a posicao a ser remivida: ";
                        cin>>posicao;
                        if(removePosicao(*(&lista), posicao)){
                            cout<<"Removido"<<endl;
                            getchar();
                        }else{
                            cout<<"Algo de errado!"<<endl;
                            getchar();
                        }
                    }
                    getchar();
                    break;
        };

    }while(menu != '0');

    return indice;
}

main(){
    setlocale(LC_ALL, "Portuguese");

    No* li1;
    No* li2;
    
    int menu = -1, indice1 = 0,indice2 = 0, opL=0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Alimentar lista            #" << endl;
        cout << "# 2 - Lista sao Iguais           #" << endl;
        cout << "# 3 - Unia                       #" << endl;
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
                    indice1 = alimentaLista(&li1, indice1);
                }else if(opL == 1){
                    indice2 = alimentaLista(&li2, indice2);
                }else{
                    cout<<"Nao temos esta lista!";
                }
                getchar();
                break;
            case 2 :
                system("cls");
                if(igual(&li1, &li2)){
                    cout<<"Sao iguais!"<<endl;
                }else{
                    cout<<"Nao sao iguais!"<<endl;
                }
                getchar();
                break;
            case 3 :
                system("cls");
                No* listaUnida;
                inicializaL(&listaUnida);
                uniao(&li1, &li2, &listaUnida);
                cout<<"Lista Unida: "<<endl;
                mostraL(&listaUnida);
                getchar();
                break;
        };

    }while(menu != 0);
    
}

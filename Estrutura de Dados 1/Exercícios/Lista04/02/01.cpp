#include <bits/stdc++.h>
using namespace std;

#include "filacircular.hpp"


main(){
    setlocale(LC_ALL, "Portuguese");

    Fila f;
    int tamFila;
    inicializaF(&f, tamFila);
    Aviao v;


    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "#######################MENU######################" << endl;
        cout << "# 0 - Sair                                      #" << endl;
        cout << "# 1 - Entrada de um novo aviao                  #" << endl;
        cout << "# 2 - Decolagem de um aviao                     #" << endl;
        cout << "# 3 - Listar todos os avioes a espera           #" << endl;
        cout << "# 5 - Listar caracteristicas do proximo aviao   #" << endl;
        cout << "# 6 - Nº de avioes a espera de decolar          #" << endl;
        cout << "#################################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case 0 :
                system("cls");
                cout<<"Porgrama Finalizado"<<endl;
                getchar();
                break;
            case 1 :
                system("cls");
                cout<<"Digite o codigo do aviao: ";
                cin>>v.codigo;
                cout<<"Digite o numero de passageiros do aviao: ";
                cin>>v.numPas;
                cout<<"Digite a empresa do aviao: ";
                cin>>v.empresa;
                
                if(enfileiraF(&f, v)){
                    cout<<"Aviao inserido!"<<endl;
                }else{
                    cout<<"Nao foi possivel enfileirar o aviao, ou a fila esta cheia ou nao foi inicializada!"<<endl;
                }

                indice++;
                getchar();
                break;
            case 2 :
                system("cls");
                if(desenfileiraF(&f, &v)){
                    cout<<"O aviao "<<v.codigo<<" decolou!"<<endl;
                }else{
                    cout<<"Nao foi possivel desenfileirar o aviao, ou a fila esta vazia ou nao foi inicializada!"<<endl;
                }
                getchar();
                break;
            case 3 :
                system("cls");
                cout<<"Codigo dos avioes a espera para decolagem: "<<endl;
                mostraF(&f);
                getchar();
                break;

            case 4 :
                system("cls");
                if(espiarF(&f, &v)){
                    cout<<"Seguem as informacoes do proximo avia a decolar: "<<endl;
                    cout<<"Codigo: \t"<<v.codigo<<endl;
                    cout<<"Numero de passageiros: \t"<<v.numPas<<endl;
                    cout<<"Empresa: \t"<<v.empresa<<endl;
                }

                getchar();
                break;
            case 5 :
                system("cls");
               
                getchar();
                break;
        };

    }while(menu != 0);
}

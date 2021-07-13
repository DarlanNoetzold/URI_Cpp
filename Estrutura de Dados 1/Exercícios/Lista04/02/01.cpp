#include <bits/stdc++.h>
using namespace std;

#include "filacircular.hpp"


main(){
    setlocale(LC_ALL, "Portuguese");

    Fila p1;
    int tamPilha;


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


                indice++;
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
        };

    }while(menu != 0);
}

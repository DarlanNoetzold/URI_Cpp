#include <bits/stdc++.h>
using namespace std;

#include "fila-dinamica.hpp"

void popularFila(Fila *f1){
    int  valor;
    int menu = -1, indice = 0;
    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Inserir na fila            #" << endl;
        cout << "# 2 - Remover da fila            #" << endl;
        cout << "# 3 - Mostrar fila               #" << endl;
        cout << "# 4 - Inverter fila              #" << endl;
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
                cout<<"Digite o valor: ";
                cin>>valor;
                enfileiraF(*(&f1), valor);
                getchar();
                break;
            case 2 :
                system("cls");
                if(desenfileiraF(*(&f1), &valor)){
                    cout<<"Valor "<<valor<<" desenfileirado!";
                }else{
                    cout<<"A fila esta vazia ou deu algum problema!";
                }
                getchar();
                break;
            case 3 :
                system("cls");
                mostraF(*(&f1));
                getchar();
                break;
            case 4 :
                system("cls");
                
                break;
        };

    }while(menu != 0);
}

Fila concatenaF(Fila f1, Fila f2){
    Fila conc;
    inicializaF(&conc);
    int valor=0;
    while(!vaziaF(&f1)){
        if(desenfileiraF(&f1, &valor)){
            enfileiraF(&conc, valor);
        }
    }
    while(!vaziaF(&f2)){
        if(desenfileiraF(&f2, &valor)){
            enfileiraF(&conc, valor);
        }
    }
    return conc;
}



main(){
    setlocale(LC_ALL, "Portuguese");

    Fila f1;
    Fila f2;
    inicializaF(&f1);
    inicializaF(&f2);
    int op=0;
    do{
        cout<<"Qual fila vc deseja popular? (1/2) ou 3 para sair: ";
        cin>>op;
        if(op == 1){
            popularFila(&f1);
        }else if(op == 2){
            popularFila(&f2);
        }
    }while(op != 3);
    

    Fila conc = concatenaF(f1, f2);

    cout<<"Filas concatenadas: "<<endl;

    mostraF(&conc);
}

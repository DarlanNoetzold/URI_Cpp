#include <bits/stdc++.h>
using namespace std;

void leitura(int **v1){
    int j = 0;
    while(j < 10){
        (*((*v1)+j)) = rand()%50;
        j++;
    }
    v1 -= j;
}

void mostrar(int **v1){
    int i = 0;
    cout<<"v1: ";
    while(i < 10){
        cout<<(*((*v1)+i))<<"|";
        i++;
    }
    v1 -= i;
    cout<<endl;
}

void mostrarPares(int **v1){
    int i = 0;
    cout<<"Pares v1: ";
    while(i < 10){
        if((*((*v1)+i)) % 2 == 0){
            cout<<(*((*v1)+i))<<"|";
        }
        i++;
    }
    v1 -= i;
}

void mostrarImpares(int **v1){
    int i = 0;
    cout<<"Impares v1: ";
    while(i < 10){
        if((*((*v1)+i)) % 2 == 1){
            cout<<(*((*v1)+i))<<"|";
        }
        i++;
    }
    v1 -= i;
    cout<<endl;
}

main(){
    srand(time(NULL));
    int *v1 = new int[10];
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Gerar valores              #" << endl;
        cout << "# 2 - Mostrar                    #" << endl;
        cout << "# 3 - Pares                      #" << endl;
        cout << "# 4 - Impares                    #" << endl;
        cout << "##################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                indice++;
                leitura(&v1);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v1";
                else
                    cout<<*v1;
                    mostrar(&v1);
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v1";
                else
                    mostrarPares(&v1);
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        mostrarImpares(&v1);
                    getchar();
                break;

        };
    }while(menu != 0);
}

#include <bits/stdc++.h>
using namespace std;

void leitura(int **v3,int v1[10], int v2[10]){
    int j = 0, i=0;
    for(int x = 0; x<10; x++){
        v1[x] = rand()%20;
        v2[x] = rand()%20;
    }
    cout<<"v1: ";
    while(j < 10){
        (*((*v3)+j)) = v1[j];
        cout<<v1[j]<<"|";
        j++;
    }
    cout<<"\nv2: ";
    while(i < 10){
        (*((*v3)+(j+i))) = v2[i];
        cout<<v2[i]<<"|";
        i++;
    }
    v3 -= (j+i);
}

void mostrar(int **v3){
    int i = 0;
    cout<<"v3: ";
    while(i < 20){
        cout<<(*((*v3)+i))<<"|";
        i++;
    }
    v3 -= i;
    cout<<endl;
}

void mostrarPares(int **v3){
    int i = 0;
    cout<<"Pares v3: ";
    while(i < 20){
        if((*((*v3)+i)) % 2 == 0){
            cout<<(*((*v3)+i))<<"|";
        }
        i++;
    }
    v3 -= i;
}

void mostrarImpares(int **v3){
    int i = 0;
    cout<<"Impares v3: ";
    while(i < 20){
        if((*((*v3)+i)) % 2 == 1){
            cout<<(*((*v3)+i))<<"|";
        }
        i++;
    }
    v3 -= i;
    cout<<endl;
}

void ordena(int **v3){
    int i =0, j =0,aux;
    while(i < 20){
        j=0;
        while(j < 20){
            if((*((*v3)+j)) >= (*((*v3)+i))){
                aux = (*((*v3)+i));
                (*((*v3)+i)) = (*((*v3)+j));
                (*((*v3)+j)) = aux;
            }
            j++;
        }
        i++;
    }
    v3-=i;
}

void soma(int **v3){
    int i = 0,soma=0;
    while(i < 20){
        soma += (*((*v3)+i));
        i++;
    }
    v3 -= i;
    cout<<"Soma "<<soma<<endl;
}

main(){
    srand(time(NULL));
    int v1[10], v2[10];
    int *v3 = new int[20];
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Gerar valores              #" << endl;
        cout << "# 2 - Mostrar                    #" << endl;
        cout << "# 3 - Pares                      #" << endl;
        cout << "# 4 - Impares                    #" << endl;
        cout << "# 5 - Ordem Crescente            #" << endl;
        cout << "# 6 - Soma                       #" << endl;
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
                leitura(&v3, v1, v2);
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else{
                    mostrar(&v3);
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else
                    mostrarPares(&v3);
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        mostrarImpares(&v3);
                    getchar();
                break;
            case 5 :
                system("cls");
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        ordena(&v3);
                    getchar();
                break;
            case 6 :
                system("cls");
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        soma(&v3);
                    getchar();
                break;

        };
    }while(menu != 0);
}

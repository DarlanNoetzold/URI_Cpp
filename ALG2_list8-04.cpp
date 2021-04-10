#include <bits/stdc++.h>
using namespace std;

void leitura(int **v3,int **tam){
    cout<<"Digite o tamanho do vetor: ";
    cin>>**tam;
    int j = 0;
    while(j<**tam){
        (*((*v3)+j)) = rand()%20;
        j++;
    }
    v3 -= **tam;
}

void mostrar(int **v3, int **tam){
    int i = 0;
    cout<<"Vetor normal: ";
    while(i < **tam){
        cout<<(*((*v3)+i))<<"|";
        i++;
    }
    cout<<"\nVetor invertido: ";
    i--;
    while((i+1) > 0){
        cout<<(*((*v3)+i))<<"|";
        i--;
    }
    v3-=**tam;
    cout<<endl;
}

void troca(int **v3, int **tam){
    int i =0, j =0,aux, vaux[**tam];

    cout<<"Vetor normal: ";
    while(i < **tam){
        cout<<(*((*v3)+i))<<"|";
        vaux[i] = (*((*v3)+i));
        i++;
    }
    v3-=**tam;
    i=0;

    while(i < **tam/2){
        aux = vaux[i];
        vaux[i] = vaux[**tam-i-1];
        vaux[**tam-i-1] = aux;
        i++;
    }
    v3-=**tam;
    i=0;

    cout<<"\nVetor Trocado: ";
    while(i < **tam){
        cout<<vaux[i]<<"|";
        i++;
    }
}

main(){
    srand(time(NULL));
    int *tam = new int;
    int *v3 = new int[*tam];
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Gerar valores              #" << endl;
        cout << "# 2 - Mostrar                    #" << endl;
        cout << "# 3 - Trocar                     #" << endl;
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
                leitura(&v3, &tam);
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else{
                    mostrar(&v3, &tam);
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else
                    troca(&v3, &tam);
                getchar();
                break;

        };
    }while(menu != 0);
}

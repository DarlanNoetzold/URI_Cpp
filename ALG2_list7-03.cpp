#include <bits/stdc++.h>
using namespace std;

void leitura(int *v1){
    for(int j = 0; j < 20; j++){
        v1[j] = rand()%50;
        cout<<v1[j]<<"|";
    }
    getchar();
}

void preencher(int *v1, int *v2){
    int i = 0;
    while(i < 20){
        *v2 = *v1;
        v2++;
        v1++;
        i++;
    }
    reverse(v2, v2+20);
}

void mostrar(int *v1,int *v2){
    cout<<"v1: ";
    for(int j = 0; j < 20; j++){
        cout<<v1[j]<<"|";
    }
    cout<<endl;
    cout<<"v2: ";
    for(int j = 0; j < 20; j++){
        cout<<v2[j]<<"|";
    }
}

void maiorAndMenor(int *v1){
    int maior=0,menor,i=0;
    float sum=0;

    while(i < 20){
        if(i==0 || *v1 > maior){
            maior = *v1;
        }
        if(i==0 || *v1 < menor){
            menor = *v1;
        }
        sum += *v1;
        v1++;
        i++;

    }
    cout<<"O maior numero e: "<<maior<<" e o menor e "<<menor<<endl;
    cout<<"A media e: "<<sum/20;
}

main(){
    srand(time(NULL));
    int v1[20], v2[20];
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###################MENU###################" << endl;
        cout << "# 0 - Sair                               #" << endl;
        cout << "# 1 - Gerar valores de v1                #" << endl;
        cout << "# 2 - Preencher v2                       #" << endl;
        cout << "# 3 - Mostrar v1 e v2                    #" << endl;
        cout << "# 4 - Solicitar a leitura de um valor    #" << endl;
        cout << "##########################################" << endl;
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
                leitura(v1);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v1";
                else
                    preencher(v1, v2);
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v1";
                else
                    mostrar(v1, v2);
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        maiorAndMenor(v1);
                    getchar();
                break;

        };
    }while(menu != 0);
}

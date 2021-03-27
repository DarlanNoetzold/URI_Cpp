#include <bits/stdc++.h>
using namespace std;

void leitura(int *x){
    for(int j = 0; j < 10; j++){
        x[j] = rand()%50;
        cout<<x[j]<<"|";
    }
    getchar();
}

void soma(int *x){
    int soma=0;
    for(int j = 0; j < 10; j++){
        soma += x[j]; 
    }
    cout<<"A soma e "<<soma<< endl;
}

void maiorAndMenor(int *x){
    int maior=0,menor;
    for(int j = 0; j < 10; j++){
        if(j==0 || x[j] > maior){
            maior = x[j];
        }
        if(j==0 || x[j] < menor){
            menor = x[j];
        }
    }
    cout<<"O maior numero e: "<<maior<<" e o menor e "<<menor;
}

void solicita(int *x, int cod){
    for(int i = 0; i < 10; i++){
        if(x[i] == cod){
            cout<<"O numero "<<x[i]<<" existe no vetor e esta na posi??o: "<< i << endl;
            getchar();
        }
    }
}


main(){
    srand(time(NULL));
    int x[50];
    int menu = -1, indice = 0, cod=0;

    do{
        system("cls");
        cout << "###################MENU###################" << endl;
        cout << "# 0 - Sair                               #" << endl;
        cout << "# 1 - Gerar valores                      #" << endl;
        cout << "# 2 - Mostrar soma dos valores           #" << endl;
        cout << "# 3 - Mostrar maior e menor valor        #" << endl;
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
                leitura(x);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    soma(x);
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    maiorAndMenor(x);
                getchar();
                break;

            case 4 :
                system("cls");
                cout<<"Digite o codigo: ";
                cin>>cod;
                if(indice < 0)
                        cout << "E necessario ler valores primeiro";
                    else
                        solicita(x, cod);
                    getchar();
                break;

        };
    }while(menu != 0);
}

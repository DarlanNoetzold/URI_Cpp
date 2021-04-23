#include <bits/stdc++.h>
using namespace std;

void principal(int vetor[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j< 5 ; j++){
            if(i==j){
                cout<<vetor[i][j]<<"|";
            }
        }
    }
}

void secundaria(int vetor[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j< 5 ; j++){
            if((i+j) == 4){
                cout<<vetor[i][j]<<"|";
            }
        }
    }
}

void somas(int vetor[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j< 5 ; j++){
            cout<<vetor[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int somaAbaixo=0,somaAcima=0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j< 5 ; j++){
            if(i==j){

            }else if(j > i){
                somaAcima += vetor[i][j];
            }else if(i > j){
                somaAbaixo += vetor[i][j];
            }
        }
    }

    cout<<"A soma dos valores acima da diagonal principal eh: "<<somaAcima<<endl;
    cout<<"A soma dos valores abaixo da diagonal principal eh: "<<somaAbaixo<<endl;
}



main(){
    srand(time(NULL));
    ofstream escreve("teste.txt",ios::out);

    for(int i = 0; i < 25; i++){
        escreve << rand()%100 << ";";
    }
    escreve.close();
    ifstream ler("teste.txt", ios::in);
    char numChar[4];
    int vetor[5][5];
    for(int i = 0; i < 5 && !ler.fail(); i++){
        for(int j = 0; j < 5 && !ler.fail(); j++){
            ler.getline(numChar,4, ';');
            vetor[i][j] = atoi(numChar);
        }
    }
    int menu = -1;
    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Diagonal Principal                   #" << endl;
        cout << "# 2 - Diagonal Secundaria                  #" << endl;
        cout << "# 3 - Matriz e somas                       #" << endl;
        cout << "############################################" << endl;
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
                principal(vetor);
                getchar();
                break;
            case 2 :
                system("cls");
                secundaria(vetor);
                getchar();
                break;
            case 3 :
                system("cls");
                somas(vetor);
                getchar();
                break;
        };
    }while(menu != 0);
}
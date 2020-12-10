#include<iostream>
#include <time.h>
#define NUM 6
using namespace std;
int mat[6][6], VI[18], VP[18];

void geraM(){
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            mat[l][c] = rand()%100;
        }
    }
}

void mostraM(){
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            cout<<"|"<<mat[l][c];
        }
        cout<<"|\n";
    }
}

void opera(){
    int menor;
    for(int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            if(c == 0 || mat[l][c] < menor){
                menor = mat[l][c];
            }
        }
        for(int i = 0; i < NUM; i++){
            mat[l][i] = menor *mat[l][i];
        }
    }
}

void geraPI(){
    int contP=0,contI=0;
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            if(c%2==0){
                VP[contP] = mat[l][c];
                contP++;
            }else{
                VI[contI] = mat[l][c];
                contI++;
            }
        }
    }
}

void mostraPI(){
    cout<<"\n";
    cout<<"Vetor das colunas Impares: \n";
    for (int la = 0; la < 18; la++){
        cout<<"|"<<VI[la];
    }
    cout<<"\n\n";
    cout<<"Vetor das colunas Pares: \n";
    for (int la = 0; la < 18; la++){
        cout<<"|"<<VP[la];
    }
}
main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");

    geraM();
    cout<<"Matriz gerada inicialmente: \n";
    mostraM();

    opera();

    cout<<"\n";
    cout<<"Matriz Multiplicada: \n";
    mostraM();

    geraPI();
    cout<<"\n";
    mostraPI();


}




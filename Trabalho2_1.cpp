#include<iostream>
#include <time.h>

using namespace std;
#define NUM 10

char mat[NUM][NUM];
void preenche_Matriz(){
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            mat[l][c] = 'L';
        }
    }
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            cout<<"|"<<mat[l][c];
        }
        cout<<"|"<<endl;
    }
}

void faz_Rezerva(int lin, int col){
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            if(l == lin && c == col){
                if(mat[l][c] != 'R'){
                    mat[l][c] = 'R';
                    cout<<"\nA poltrona foi reservada!"<<endl;
                }else{
                    cout<<"\nA poltrona já esta ocupada."<<endl;
                }
            }
        }
    }
    for (int l = 0; l < NUM; l++){
        for(int c = 0; c < NUM; c++){
            cout<<"|"<<mat[l][c];
        }
        cout<<"|"<<endl;
    }
}
main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    preenche_Matriz();
    char op;
    do{
        int col, lin;
        cout<<"\nDigite o número da linha da poltrona: ";
        cin>>lin;
        cout<<"\nDigite o número da coluna da poltrona: ";
        cin>>col;

        faz_Rezerva(lin,col);

        cout<<"Deseja reservar mais poltronas? (S/N): ";
        cin>>op;
    }while(op == 'S' || op == 's');

    cout<<"\n\nObrigado\n\n\n"<<endl;
}




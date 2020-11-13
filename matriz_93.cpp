#include<iostream>
#include <time.h>

using namespace std;

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    int m[5][5], somaCol3=0, somaLin4=0,somaDiagP=0,somaDiagS=0;

    for(int i =0; i < 5;i++){
        for(int l = 0; l < 5;l++){
            m[i][l] = rand()%10;
            if(l == 2){
                somaCol3 = somaCol3 + m[i][l];
            }
            if(i == 3){
                somaLin4 = somaLin4 + m[i][l];
            }
            if(i == l){
                somaDiagP = somaDiagP + m[i][l];
            }
            if((l + i) == 4){
                somaDiagS = somaDiagS + m[i][l];
            }
        }
    }
    for(int i =0; i < 5;i++){
        for(int l = 0; l < 5;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }

    cout<<"\nSoma da linha 4: "<< somaLin4;
    cout<<"\nSoma da coluna 3: "<< somaCol3;
    cout<<"\nSoma da Diagonal principal: "<< somaDiagP;
    cout<<"\nSoma da Diagonal secundária: "<< somaDiagS;

}



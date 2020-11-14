#include<iostream>
#include <time.h>

using namespace std;

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    int m[3][3], somaCol3=0, somaLin4=0,somaDiagP=0,somaDiagS=0;

    for(int i =0; i < 3;i++){
        for(int l = 0; l < 3;l++){
            m[i][l] = rand()%10;
        }
    }
    for(int i =0; i < 3;i++){
        for(int l = 0; l < 3;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }
    cout<<"Rotacionada: \n";
    for(int l = 2; l >= 0; l--){
        for(int i = 0; i < 3; i++){
               cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
}

}



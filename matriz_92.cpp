#include<iostream>
#include <time.h>

using namespace std;

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    int m[3][4], v1[4], v2[4];

    for(int i =0; i < 3;i++){
        for(int l = 0; l < 4;l++){
            m[i][l] = rand()%100;
        }
    }
    for(int i =0; i < 3;i++){
        for(int l = 0; l < 4;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }
    cout<<"\nInvertido: \n";
    for(int i =0; i < 3;i++){
        for(int l = 0; l < 4;l++){
            if (i == 0){
                v1[l] = m[i][l];
            }
            if (i == 2){
                v2[l] = m[i][l];
            }
        }
    }
    for(int i =0; i < 3;i++){
        for(int l = 0; l < 4;l++){
            if (i == 0){
                m[i][l] = v2[l];
            }
            if (i == 2){
                m[i][l] = v1[l];
            }
        }
    }

    for(int i =0; i < 3;i++){
        for(int l = 0; l < 4;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }

}


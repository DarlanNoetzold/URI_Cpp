#include<iostream>
#include <time.h>

using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    char m[5][5];
    for(int i =0; i < 5;i++){
        for(int l = 0; l < 5;l++){
            if((i + l) < 4){
                m[i][l] = 'A';
            }
            if((i + l) > 4){
                m[i][l] = 'B';
            }
            if((l + i) == 4){
                m[i][l] = '0';
            }
        }
    }
    for(int i =0; i < 5;i++){
        for(int l = 0; l < 5;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }

}



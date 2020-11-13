#include<iostream>
#include <time.h>

using namespace std;

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    int m[3][6], val;

    for(int i =0; i < 3;i++){
        for(int l = 0; l < 6;l++){
            m[i][l] = rand()%100;
        }
    }
    for(int i =0; i < 3;i++){
        for(int l = 0; l < 6;l++){
            cout<<"|"<<m[i][l];
        }
        cout<<"|\n";
    }

    cout<<"\nDigite um valor: ";
    cin>>val;

    for(int i =0; i < 3;i++){
        for(int l = 0; l < 6;l++){
            cout<<"|"<<m[i][l] * val;
        }
        cout<<"|\n";
    }
}

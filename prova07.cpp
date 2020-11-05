#include<bits/stdc++.h>
using namespace std;

#define NUM 10
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM];
    float media,sum=0;

    for(int i =0;i<NUM;i++){
        cout<<"Digite um valor entre 0 e 100: ";
        cin>>v[i];
        if(v[i] < 0 || v[i] > 100){
            cout<<"Digite um valor entre 0 e 100, por favor.\n";
            i--;
            continue;
        }

        sum = sum +v[i];
    }
    media = sum /NUM;

    cout<<"\nValores maiores que a média("<<media<<"): ";
    for(int i =0;i<NUM;i++){
        if(v[i] > media){
            cout<<"--"<<v[i];
        }
    }

    cout<<"\nValores menores que a média("<<media<<"): ";
    for(int i =0;i<NUM;i++){
        if(v[i] < media){
            cout<<"--"<<v[i];
        }
    }

    sort(v, v+NUM);

    cout<<"\nValores ordenado de forma crescente: ";
    for(int i =0;i<NUM;i++){
        cout<<"--"<<v[i];
    }
    cout<<"\n\n\n";
}



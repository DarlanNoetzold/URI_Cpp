#include<iostream>
using namespace std;
#define NUM 30
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], contPar=0, contImpar=0;
    float media;

    for(int i =0;i<NUM;i++){
        cout<<"Digite um valor: ";
        cin>>v[i];

        if(v[i] % 2 == 0){
            contPar++;
        }else{
            contImpar++;
        }

        media = media + v[i];
    }
    for(int i = 0;i<NUM;i++){
        cout<<v[i]<<"\n";
    }

    cout<<"Existem: "<< contPar<<" valores pares e: "<<contImpar<<" valores ímpares. E a média desses valores é: "<<media/NUM;

}

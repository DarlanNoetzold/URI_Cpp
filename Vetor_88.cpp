#include<iostream>
using namespace std;
#define NUM 50
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], maior, menor;
    for(int i =0;i<NUM;i++){
        cout<<"Digite um n�mero: ";
        cin>>v[i];
        if(i == 0 || v[i] > maior){
            maior = v[i];
        }
        if(i == 0 || v[i] < menor){
            menor = v[i];
        }

    }
    for(int i = 0;i<NUM;i++){
        cout<<"N�mero: "<<v[i]<<"\n";
    }
    cout<<"Maior n�mero: "<<maior<<"\n";
    cout<<"Menor n�mero: "<<menor;

}

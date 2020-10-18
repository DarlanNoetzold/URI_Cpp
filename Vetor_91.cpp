#include<iostream>
using namespace std;
#define NUM 10
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], maior, maiorId,i;

    for(i=0;i < NUM;i++){
        cout<<"Digite um valor: ";
        cin>>v[i];

        if(i == 0 || v[i] > maior){
            maior = v[i];
            maiorId = i;
        }
    }
    cout<<"O maior valor digitado foi: "<<maior<<" encontrado no indice: "<< maiorId;
}

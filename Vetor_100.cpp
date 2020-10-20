#include<iostream>
using namespace std;
#define NUM 10
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM],cont = 0,aux = 0;
    for(int i =0;i<NUM;i++){
        cout<<"Digite o valor: ";
        cin>>v[i];

    }
    for(int i = 0;i<NUM;i++){
        for(int j = 0; j < NUM; j++){
            if(v[i] == v[j]){
                cont++;
            }
        }
        for(int j = 0;j<i;j++){
            if(v[i] == v[j]){
                aux++;
            }
        }
        if(aux == 0){
            cout<<"Valor: "<<v[i]<<" apareceu "<<cont<<" vezes.\n";
        }
        aux=0;
        cont=0;

    }

}

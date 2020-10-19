#include<bits/stdc++.h>
using namespace std;
#define NUM 20

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], par[NUM/2],impar[NUM/2],cont=0, contI=0;

    for(int i = 0; i<NUM;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
    }
    for(int i = 0; i < NUM; i++){
        cout<<"\nNúmero da posição "<<i<<" é igual a: "<<v[i];
        if(v[i] % 2 ==0){
            par[cont] = v[i];
            cont++;
        }else{
            impar[contI] = v[i];
            contI++;
        }
    }
    for(int i = 0; i < cont;i++){
        cout<<"\nNúmero PAR: "<<par[i];
    }
    for(int i = 0; i < contI;i++){
        cout<<"\nNúmero IMPAR: "<<impar[i];
    }
}


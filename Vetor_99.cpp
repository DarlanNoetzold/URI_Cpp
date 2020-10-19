#include<bits/stdc++.h>
using namespace std;
#define NUM 10

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], aux=0,cont=0,num;

    for(int i =0;i<NUM;i++){
        cout<<"Digite um valor: ";
        cin>>num;
        for(int j = 0; j < NUM; j++){
            if(num == v[j]){
                aux = 1;
            }
        }
        if(aux == 0){
            v[i] = num;
            cont++;
        }else{
            cout<<"\nO valor já existe no conjunto.\n";
            cont++;
            aux=0;
            i--;
        }
    }
    for(int i = 0; i < NUM; i++){
        cout<<"\nValor: "<<v[i];
    }
    cout<<"\nForam digitados "<< cont<<" valores.";

}


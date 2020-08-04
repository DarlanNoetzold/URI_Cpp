#include<iostream>
using namespace std;

main(){
    int num, aux,cont=0,primos=0;
    for(int i =0;i<10;i++){
        cin>>num;
        aux = num;
        cont=0;
        for(num;num>=1;num--){
            if(aux%num==0){
                cont++;
            }
        }
        if(cont<=2){
            primos++;
        }
    }
    cout<<"Dos 10 numeros "<< primos<<" sao primos"<<endl;
}

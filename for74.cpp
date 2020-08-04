#include<iostream>

using namespace std;

main(){
    int seq, valAtual;
    cin>>seq;
    int vet[seq];
    for(int i=1; i<=seq; i++){
        if(i==1 || i==2){
            vet[i]= 1;
        }else{
            vet[i] = vet[i-1]+vet[i-2];
        }
        cout<<vet[i]<<" ";
    }
}



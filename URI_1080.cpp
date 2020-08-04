#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[100];
    int maior,pos;
    for(int i=0; i<100;i++){
        cin>>vet[i];
        if(i==0){
            maior = vet[i];
        }else if(vet[i] > maior){
            maior = vet[i];
            pos = i+1;
        }
    }
    cout<<maior<<endl;
    cout<<pos<<endl;
}


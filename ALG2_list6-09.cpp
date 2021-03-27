#include <bits/stdc++.h>
using namespace std;

void leitura(double *op){
    double x;
    cin>>x;
    if(x < *op){
        *op = x;
    }
}

main(){
    double op=1000;
    while(op != 0){
        cout<<"\nDigite seu tempo: ";
        leitura(&op);
        cout<<"\nValor atual: "<< op;
    }
}

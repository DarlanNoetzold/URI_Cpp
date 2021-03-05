#include <bits/stdc++.h>
using namespace std;

int calculaPot(int base, int exp){
    if(exp != 1){
        return base * calculaPot(base, exp-1);
    }else{
        return base;
    }
}

main(){
    srand(time(NULL));
    int base,exp;
    cout<<"Digite a base: ";
    cin>>base;
    cout<<"Digite o expoente: ";
    cin>>exp;

    cout<<"O resultado eh: "<< calculaPot(base,exp);
}
#include <bits/stdc++.h>

using namespace std;
double aux = 0;
double calcHarm(double n){
    if(n > 0){
        aux += 1.0/n;
        return calcHarm(n-1);
    }else{
        return aux;
    }
}

main(){
    double n;
    cout<<"Digite o valor de n:";
    cin>>n;
    cout<<"O numero harmonico eh igual a: "<< calcHarm(n);
}
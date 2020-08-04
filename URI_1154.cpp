#include <bits/stdc++.h>
using namespace std;

main(){
    int num,i=0;
    double media, soma=0.0;
    while(true){
        cin>>num;
        if(num<0){
            break;
        }
        soma = soma + num;
        i++;
    }
    media = soma/i;
    cout<<fixed<<setprecision(2);
    cout<<media<<endl;
}


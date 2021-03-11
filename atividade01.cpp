#include <bits/stdc++.h>
using namespace std;

main(){
    int a[7] = {4,2,8,12,9,5,3};
    int soma = 0,i,j,n=6,p=0,x=4;
    soma = a[0];
    for(i = 1; i <= n; i++){
        if(a[i] != 0){
            p=x;
            for(j = i + 1; j < i; j++){
                p = p * x;
                cout<<"teste "<<i;
            }
            soma = soma + a[i] * p;
        }
    }
    cout<<soma;
}
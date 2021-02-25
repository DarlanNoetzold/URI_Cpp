#include <bits/stdc++.h>

using namespace std;

double leitura(string texto){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

int retornaMDC(int cont, int n1, int n2){
    if(n1%cont!=0 || n2%cont!=0){
        return retornaMDC(cont-1, n1,n2);
    }else{
        return cont;
    }
}

main(){
    int n1 = leitura("Defina o primeiro numero: ");
    int n2 = leitura("Defina o segundo numero: ");
    int cont;
    if(n1 > n2){
        cont = n1;
    }else{
        cont = n2;
    }
    
    cout<<"O MDC de "<<n1<<" e "<<n2<<" eh: "<< retornaMDC(cont,n1,n2);
}
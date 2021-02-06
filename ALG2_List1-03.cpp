#include <bits/stdc++.h>
#include <locale.h>

using namespace std;

main(){
    cout<<fixed<<setprecision(2);
    setlocale(LC_ALL, "portuguese-brazilian");
    int primo=0, notPrimo=0;
    char op;
    do{
        int num, div=0;
        cout<<"Digite um número: ";
        cin>>num;
        for(int i = 1;i < num; i++){
            if(num % i == 0){
                div++;
            }
        }
        if(div == 1){
            cout<<"\nÉ primo!";
            primo++;
        }else{
            cout<<"\nNão é primo!";
            notPrimo++;
        }
        cout<<"\n\n Deseja continuar? [S/s][N/n]";
        cin>>op;
    }while(op == 'S' or op == 's');
    cout<<"\n\n Foram avaliados "<<primo+notPrimo<<" números e "<<primo<<" são primos, enquanto "<<notPrimo<<" não são primos!";

}
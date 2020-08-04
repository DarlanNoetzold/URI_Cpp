#include <bits/stdc++.h>

using namespace std;

main(){
    int x = 0,neg=0,pos=0,imp=0,par=0,num;
    while(x < 5){
        cin>>num;
        if(num<0){
            neg++;
        }else if(num >0){
            pos++;
        }

        if(num%2==0){
            par++;
        }else if(num%2==1){
            imp++;
        }
        x++;
    }

    cout<<par<<" valor(es) par(es)"<<endl;
    cout<<imp<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
}

#include<iostream>
using namespace std;

main(){
    int num, cont=0,aux;
    cin>>num;
    aux = num;
    for(num; num >= 1;num--){
        if(aux%(num)==0){
            cout<<aux<<" eh divisível por: "<<num<<endl;
            cont++;
        }
    }
    if(cont == 2){
        cout<<num<<" eh primo"<<endl;
    }
}

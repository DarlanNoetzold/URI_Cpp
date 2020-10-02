#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    string nome1,nome2,nome3;
    int a,b,c;

    if(a > b && a>c){
        cout<<nome1<<": "<<a<<" ptos";
        if(b>c){
            cout<<nome2<<": "<<b<<" ptos";
            cout<<nome3<<": "<<c<<" ptos";
        }else{
            cout<<nome3<<": "<<c<<" ptos";
            cout<<nome2<<": "<<b<<" ptos";
        }
    }else if(b > a && b > c){
        cout<<nome2<<": "<<b<<" ptos";
        if(a>c){
            cout<<nome1<<": "<<a<<" ptos";
            cout<<nome3<<": "<<c<<" ptos";
        }else{
            cout<<nome3<<": "<<c<<" ptos";
            cout<<nome1<<": "<<a<<" ptos";
        }
    }else{
        cout<<nome3<<": "<<c<<" ptos";
        if(b>a){
            cout<<nome2<<": "<<b<<" ptos";
            cout<<nome1<<": "<<a<<" ptos";
        }else{
            cout<<nome1<<": "<<a<<" ptos";
            cout<<nome2<<": "<<b<<" ptos";
        }
    }
}

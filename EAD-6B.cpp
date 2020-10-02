#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    string nome1,nome2,nome3;
    int a,b,c;
    cout<<"Nomes: ";
    cin>>nome1>>nome2>>nome3;

    cout<<"Pontos: ";
    cin>>a>>b>>c;
    if(a > b && a>c){
        cout<<nome1<<": "<<a<<" ptos\n";
        if(b>c){
            cout<<nome2<<": "<<b<<" ptos\n";
            cout<<nome3<<": "<<c<<" ptos\n";
        }else{
            cout<<nome3<<": "<<c<<" ptos\n";
            cout<<nome2<<": "<<b<<" ptos\n";
        }
    }else if(b > a && b > c){
        cout<<nome2<<": "<<b<<" ptos\n";
        if(a>c){
            cout<<nome1<<": "<<a<<" ptos\n";
            cout<<nome3<<": "<<c<<" ptos\n";
        }else{
            cout<<nome3<<": "<<c<<" ptos\n";
            cout<<nome1<<": "<<a<<" ptos\n";
        }
    }else{
        cout<<nome3<<": "<<c<<" ptos\n";
        if(b>a){
            cout<<nome2<<": "<<b<<" ptos\n";
            cout<<nome1<<": "<<a<<" ptos\n";
        }else{
            cout<<nome1<<": "<<a<<" ptos\n";
            cout<<nome2<<": "<<b<<" ptos\n";
        }
    }
}


#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[10],contNum=0,x;
    cout<<"Digite um valor para contar: ";
    cin>>x;
    for(int i =0;i<10;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
        if(v[i]==x){
            contNum++;
        }
    }
    for(int i = 0;i<10;i++){
        cout<<"Número: "<<v[i]<<"\n";
    }
    cout<<"Existem "<<contNum<<" números "<<x;

}

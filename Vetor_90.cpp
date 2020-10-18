#include<iostream>
using namespace std;
#define NUM 100
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM], multi, x;
    cout<<"Digite o valor para multiplicar o vetor: ";
    cin>>x;
    for(int i =0;i<NUM;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
    }
    for(int i = 0;i<NUM;i++){
        multi = v[i]*x;
        cout<<"Número: "<<multi<<"\n";
    }

}

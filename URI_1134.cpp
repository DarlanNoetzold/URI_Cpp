#include <iostream>

using namespace std;

int main(){
    int cod,al=0,gas=0,die=0;
    while(cod != 4){
        cin>>cod;
        if(cod == 1){
            al++;
        }else if(cod == 2){
            gas++;
        }else if(cod == 3){
            die++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<die<<endl;
}

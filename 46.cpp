#include <iostream>

using namespace std;

int main(){
    int ano;
    int mes;
    int dia;

    cout<<"Digite o ano: ";
    cin>>ano;
    cout<<"Digite o mes: ";
    cin>>mes;
    cout<<"Digite o dia: ";
    cin>>dia;

    if(dia <= 31 && mes <= 12){
        cout<<"Data valida";
    }else{
        cout<<"Data invalida";
    }
}



#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int idade;

    cout<<"Idade: ";
    cin>>idade;

    if(idade < 16) cout<<"não-eleitor";
    else if(idade < 18 || idade > 65) cout<<"eleitor facultativo";
    else if(idade < 65) cout<<"eleitor obrigatório";

}

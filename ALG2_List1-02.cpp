#include <bits/stdc++.h>

using namespace std;

main(){
    cout<<fixed<<setprecision(2);
    setlocale(LC_ALL, "portuguese-brazilian");
    float h,p, imc;
    char sexo;
    cout<<"Digite a altura: ";
    cin>>h;
    cout<<"Digite o peso atual: ";
    cin>>p;
    cout<<"Digite o sexo [F/M]: ";
    cin>>sexo;
    if(sexo == 'F' || sexo == 'f'){
        imc = (62.1 * h) - 44.7;
    }else if(sexo == 'M' || sexo == 'm'){
        imc = (72.7 * h) - 58;
    }
    cout<<imc;
    if(p <= (imc+3) && p >= (imc-3)){
        cout<<"\nVocê está no peso ideal!";
    }else if(p > (imc+3)){
        cout<<"\nVocê está acima do peso!";
    }else if(p < (imc-3)){
        cout<<"\nVocê está abaixo do peso!";
    }
}
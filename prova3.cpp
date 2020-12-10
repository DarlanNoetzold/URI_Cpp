#include<iostream>

using namespace std;


char classVeic(int anoFab){
    if(anoFab == 2020){
        return 'N';
    }else if(anoFab == 2019 || anoFab == 2018 || anoFab == 2017){
        return 'S';
    }else if(anoFab < 2017){
        return 'U';
    }
}

float precoTotal(char classifica, float precoVei){
    if(classifica == 'N'){
        return precoVei + (precoVei*0.05);
    }else if(classifica == 'S'){
        return precoVei + (precoVei*0.1);
    }else if(classifica == 'U'){
        return precoVei + (precoVei*0.15);
    }
}

float valTotal(float precoTot, int parc){
    if(parc == 1){
        return precoTot - (precoTot * 0.1);
    }else if(parc > 1 && parc <= 12){
        return precoTot + (precoTot * 0.1);
    }else if(parc > 12 && parc <= 24){
        return precoTot + (precoTot * 0.15);
    }else if(parc > 24 && parc <= 36){
        return precoTot + (precoTot * 0.2);
    }
}

main(){
    int anoFab, parc;
    float precoVei;
    setlocale(LC_ALL, "portuguese-brazilian");
    cout<<"Digite o ano de fabricação do veículo: ";
    cin>>anoFab;
    cout<<"Digite o preço do veículo: ";
    cin>>precoVei;

    char classifica = classVeic(anoFab);

    float precoTot = precoTotal(classifica, precoVei);

    cout<<"\nO preço total é igual a R$"<<precoTot;
    cout<<"\nEm quantas parcelas o cliente deseja pagar: ";
    cin>>parc;

    float valTot = valTotal(precoTot, parc);


    cout<<"\nO valor total é igual a R$"<<valTot;
    cout<<"\n\n\n";
}




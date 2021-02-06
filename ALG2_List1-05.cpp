#include <bits/stdc++.h>

using namespace std;

main(){
    cout<<fixed<<setprecision(2);
    setlocale(LC_ALL, "portuguese-brazilian");
    float pao,broa;
    cout<<"\nDigite a quantidade de p?es vendidos: ";
    cin>>pao;
    cout<<"\nDigite a quantidade de broas vendidas: ";
    cin>>broa;

    pao = pao * 0.41;
    broa = broa * 3.5;

    float total = pao + broa;
    float don =  total * 0.05;
    cout<<"\nA padaria Europa arrecadou no total R$"<< total <<" sendo que ir? doar o valor de R$"<< don <<". Ficando com R$"<<total-don;
}
#include <bits/stdc++.h>

using namespace std;

double leitura(string texto){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void retornaMeses(double preco, double valMen, double correc){
    if(correc == 1){
        correc = 0.14;
    }else if(correc == 2){
        correc = 0.32;
    }else{
        cout<<"\nValor Invalido para a correcao, como padrao usaremos Poupanca."<<endl;
    }
    double precoArrecadado=0;
    int i;
    for(i = 0; preco > precoArrecadado; i++){
        precoArrecadado += valMen;
        precoArrecadado += precoArrecadado*(correc/100);
        cout<<"\n"<<precoArrecadado;
    }
    cout<<"O valor arrecadado foi "<<precoArrecadado<<endl;
    cout<<"A quantidade de meses foi de: "<<i<<endl;
}

main(){
    cout<<fixed<<setprecision(2);
    double preco = leitura("Digite a o preco do automovel: ");
    double valMen = leitura("Digite o valor mensal que sera depositado: ");
    double correc = leitura("Digite o tipo de correcao (1 - Poupanca) (2 - CD): ");

    retornaMeses(preco, valMen, correc);
}
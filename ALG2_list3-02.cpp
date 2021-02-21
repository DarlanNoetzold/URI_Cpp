#include <bits/stdc++.h>

using namespace std;

double contaSalario(double salfix, double valVend, double comis = 5, double inss = 11){
    double salTotal = salfix + (valVend * (comis/100));
    salTotal = salTotal - (salTotal*(inss/100));
    return salTotal;
}

double leitura(char texto[100]){
    double n;
    cout<<texto;
    cin>>n;
    return n;
}

main(){
    cout<<fixed<<setprecision(2);
    double salFix, valVend, comis=-1, inss=-1;
    salFix = leitura("Digite seu salario: ");
    valVend = leitura("Digite o valor vendido: ");
    comis = leitura("Digite a porcentagem da sua comissao(digite -1 para o padrao): ");
    inss = leitura("Digite a porcetagem do seu INSS(digite -1 para o padrao): ");

    double salTotal;

    if(comis != -1 && inss != -1){
        salTotal = contaSalario(salFix, valVend, comis, inss);
        cout<<"Seu salario total e: "<< salTotal;
    }else if(comis == -1 && inss != -1){
        salTotal = contaSalario(salFix, valVend, inss);
        cout<<"Seu salario total e: "<< salTotal;
    }else if(inss == -1 && comis != -1){
        salTotal = contaSalario(salFix, valVend, comis);
        cout<<"Seu salario total e: "<< salTotal;
    }else{
        salTotal = contaSalario(salFix, valVend);
        cout<<"Seu salario total e: "<< salTotal;
    }

    cout<<"\nE voce recebeu: "<< salTotal/1100.0 <<" salarios minimos!";
    
}
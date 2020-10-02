#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    double prod;
    int num;
    cout<<"valor do produto: ";
    cin>>prod;
    cout<<"Forma de pagamento: ";
    cout<<"\n1: A vista em dinheiro ou cheque.";
    cout<<"\n2: A vista no cartão.";
    cout<<"\n3: Em duas vezes.";
    cout<<"\n4: Em três vezes.";
    cin>>num;
    if(num == 1){
        prod = prod - (prod*0.1);
        cout<<"Valor a pagar: "<<prod;
    }else if (num == 2){
        prod = prod - (prod*0.05);
        cout<<"Valor a pagar: "<<prod;
    }else if(num == 3){
        cout<<"Valor a pagar: "<<prod;
    }else{
        prod = prod + (prod*0.1);
        cout<<"Valor a pagar: "<<prod;
    }
}

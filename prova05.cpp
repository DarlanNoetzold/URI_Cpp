#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int num,sum=0;
    cout<<"Digite um Número entre 1 e 100: ";
    cin>>num;
    if(num >= 1 && num <=100){
        for(int i = 1; i <= num; i++){
            if(num%i==0){
                cout<<i<<" é divisor de "<<num<<"\n";
            }
        }
        cout<<"Número impares de 0 até "<<num<<" : ";
        for(int i = 0; i <= num;i++){
            if(i%2==1){
                cout<<"-"<<i;
            }
            if(i%2==0){
                sum = sum + i;
            }
        }
        cout<<"\nA soma dos núemros pares é: "<<sum;
    }else{
        cout<<"\nO número não está no intervalo obrigatório de 1 a 100.\n\n";
    }
}


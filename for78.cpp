#include<iostream>
using namespace std;

bool ehPrimo(int num){
    int aux, cont=0;
    aux = num;
    for(num; num >= 1;num--){
        if(aux%(num)==0){
            cont++;
        }
    }
    if(cont == 2){
        return true;
    }else{
        return false;
    }
}
main(){
    int num1,num2,mult=1;
    cin>>num1;
    cin>>num2;
    for(int i =0;true;i++){
        if(ehPrimo(i)){
            while(num1%i==0 && num2%i==0 && num2 != 1 && num1 != 1){
                num1 = num1/i;
                num2 = num2/i;
                mult *= i;
            }while(num1%i==0 && num1 != 1){
                num1 = num1/i;
            }while(num2%i==0 && num2 != 1){
                num2 = num2/i;

            }
        }
        cout<<"\nNumero 1: "<<num1<<"\nNumero 2: "<<num2<<"\nMDC: "<<mult;
        if(num1==1 && num2==1){
            break;
        }
    }
}

#include<iostream>

using namespace std;

main(){
    int num, menor, maior;
    for(int i=0;i<10;i++){
        cin>>num;
        if(i ==0){
            maior = num;
            menor = num;
        }else{
            if(num> maior){
                maior = num;
            }
            if(num<menor){
                menor = num;
            }
        }
    }
    cout<<"O maior valor e: "<<maior<<". E o maior e: "<<menor<<endl;
}


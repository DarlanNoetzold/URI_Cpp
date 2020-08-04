#include<iostream>

using namespace std;

main(){
    int num,soma=0;
    cin>>num;
    for(int i =0; i<(2*num);i++){
        if(i%2!=0){
            soma += i;
        }
    }
    cout<<soma;
}



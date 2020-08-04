#include <iostream>

using namespace std;

int main(){
    double prova1,prova2,prova3,totNota;

    cout<<"Digite as 3 notas: ";
    cin>>prova1>>prova2>>prova3;

    totNota = (prova1+prova2+prova3)/3;

    if(totNota <= 59){
        cout<< "I";
    }else if(totNota <= 69){
        cout<< "S";
    }else if(totNota <= 89){
        cout<< "B";
    }else{
        cout<< "O";
    }


}




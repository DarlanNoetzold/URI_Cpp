#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int fin;
    cout<<"Final da placa: ";
    cin>>fin;
    if(fin == 1 || fin == 2 || fin == 3){
        cout<<"at� 30/04/2020";
    }else if(fin == 4 || fin == 5 || fin ==6){
        cout<<"at� 31/05/2020";
    }else if(fin == 7 || fin == 8){
        cout<<"at� 30/06/2020";
    }else{
        cout<<"at� 31/07/2020";
    }
}

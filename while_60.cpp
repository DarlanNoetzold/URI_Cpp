#include <iostream>
#include <iomanip>

using namespace std;

main(){
    double salCarl, salJo=0;
    int mes = 0;
    cout<<"Digite o salario de Carlos: ";
    cin>>salCarl;
    salJo = salCarl*(1/3.0);
    cout<<fixed<<setprecision(2);
    while(salJo<salCarl){
        mes++;
        salCarl = salCarl*1.02;
        salJo = salJo*1.05;

    }
    cout<<mes<<" meses, para João ter um salario de: "<<salJo<<" e para Carlos: "<<salCarl;


}

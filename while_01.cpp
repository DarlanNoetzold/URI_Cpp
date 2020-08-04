#include <iostream>
#include <iomanip>

using namespace std;

main(){
    double sal=1800.00, newSal=0,juros=0;
    int mes=0;
    cout<<fixed<<setprecision(2);
    do{
        mes++;
        juros = sal*0.015;
        sal *= 1.015;
        cout<<"Mes "<<mes<<"  "<<juros<<"  "<<sal<<"\n";
    }while(sal < 2000.00);
}

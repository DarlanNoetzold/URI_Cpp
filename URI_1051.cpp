#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sal, imp;

    cin>>sal;
    cout<<fixed<<setprecision(2);
    if(sal <= 2000.00){
        cout<<"Isento"<<endl;
    }else if(sal <= 3000.00){
        imp = 0.08 * (sal - 2000);
        cout<<"R$ "<<imp<<endl;
    }else if(sal <= 4500.00){
        imp = (0.08 * 1000) + ((sal - 3000) * 0.18);
        cout<<"R$ "<<imp<<endl;
    }else if(sal > 4500){
        imp = (0.08 * 1000) + (0.18 * 1500) + ((sal - 4500) * 0.28);
        cout<<"R$ "<<imp<<endl;
    }

}


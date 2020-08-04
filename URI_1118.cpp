#include <bits/stdc++.h>

using namespace std;

main(){
    double a,b,media;
    int nv=1;
    cout<<fixed<<setprecision(2);
    while(nv == 1){
        cin>>a;
        while(a <0.0 || a>10.0){
                cout<<"nota invalida"<<endl;
            cin>>a;
        }
        cin>>b;
        while(b <0.0 || b>10.0){
                cout<<"nota invalida"<<endl;
            cin>>b;
        }
        media = (a+b)/2;
        cout<<"media = "<<media<<endl;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>nv;
        while(nv != 1 && nv != 2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>nv;
        }

    }
}

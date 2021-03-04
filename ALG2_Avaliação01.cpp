#include <bits/stdc++.h>
using namespace std;

double calcula(double pesoFr, int frangos, int aux){
    double p = pesoFr + (pesoFr * 0.1);
    aux++;
    if((p/frangos) < 3000){
        return calcula(p, frangos, aux);
    }else{
        cout<<"\nO peso total foi: "<<p/1000<<"Kg. Com uma media de "<<(p/frangos)/1000<<"Kg por frango.";
        return aux;
    }

}

main(){
    cout<<fixed<<setprecision(2);
    double frangos;
    cout<<"Digite a qauntidade de frangos: ";
    cin>>frangos;
    double pesoFr = 45*frangos;
    int aux=0;
    double valFin = calcula(pesoFr,frangos,aux);
    cout<<"\nDemoraram "<<valFin<<" dias para a engorda dos frangos."<<endl;

}
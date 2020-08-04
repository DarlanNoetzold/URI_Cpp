#include <bits/stdc++.h>
using namespace std;

main(){
    double vet[12][12];
    int div = 0;
    double soma=0.0,media=0.0;
    char tip;
    cin>>tip;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>vet[i][j];
            if(j>i){
                soma += vet[i][j];
                div++;
            }
        }
    }
    cout<<fixed<<setprecision(1);
    if(tip == 'S')
         cout<<soma<<endl;
    else
         cout<<soma/div<<endl;

}


#include <bits/stdc++.h>
using namespace std;

int main(){
    double vet[12][12];
    int c;
    double soma=0.0,media=0.0;
    char tip;
    cin>>c;
    cin>>tip;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin>>vet[i][j];
            if(j == c){
                soma += vet[i][j];
            }
        }
    }
    cout<<fixed<<setprecision(1);
    if(tip == 'S')
         cout<<soma<<endl;
    else
         cout<<soma/12.0<<endl;

}


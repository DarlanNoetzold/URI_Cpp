#include <bits/stdc++.h>

using namespace std;

int main(){
    int j=0;
    double media, a=0.0, soma=0.0;
	for(int i = 0; i<6;i++){
        cin>>a;
        if(a >= 0){
            j++;
            soma = soma + a;
        }
	}
	cout<<fixed<<setprecision(1);
	media = soma/j;
	cout<<j<<" valores positivos"<<endl;
	cout<<media<<endl;
}

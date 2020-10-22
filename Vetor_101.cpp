#include<bits/stdc++.h>
using namespace std;
#define NUM 30
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM];

    for(int i =0;i<20;i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }

    sort(v, v+20);
    for(int i = 20;i<30;i++){
        cout<<"\nDigite um valor: ";
        cin>>v[i];
        sort(v, v+i);
        for(int j = 0; j < i; j++){
            cout<<v[j]<<"\n";
        }

    }

}

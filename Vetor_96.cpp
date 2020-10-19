#include<bits/stdc++.h>
using namespace std;
#define NUM 10

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM];

    for(int i =0;i<NUM;i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }

    sort(v, v+NUM);
    for(int i = 0; i< NUM; i++){
        cout<<v[i]<<"\n";
    }
}

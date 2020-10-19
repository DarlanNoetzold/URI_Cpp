#include<bits/stdc++.h>
using namespace std;
#define NUM 10

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int a[NUM], b[NUM], v[NUM*2];

    for(int i =0;i<NUM;i++){
        cout<<"Digite dois valores: ";
        cin>>a[i];
        cin>>b[i];
    }

    sort(a, a+NUM);
    sort(b, b+NUM);

    for(int i = 0; i< NUM; i++){
        v[i] = a[i];
    }
    for(int i = 0; i< NUM; i++){
        v[NUM+i] = b[i];
    }

    sort(v, v+(NUM*2));
    for(int i = 0; i<NUM*2; i++){
        cout<<"\n Número: "<<v[i];
    }
}


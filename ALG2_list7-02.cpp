#include <bits/stdc++.h>
using namespace std;

main(){
    srand(time(NULL));
    int val[10], num, aux=0;
    int *pval;
    pval = val;
    cout << "Digite um numero qualquer: ";
    cin >> num;
    int i = 0;
    while(i < 10){
        *pval = rand()%10;
        pval++;
        if(*pval == num){
            cout<<"O valor "<<num<<" existe na poiscao "<<i<<endl;
            aux++;
        }
        i++;
    }
    if(aux==0){
        cout<<"O valor "<<num<<" nao existe no vetor"<<endl;
    }
    pval -= i;
    i=0;
    while(i < 10){
        cout<<*pval<<"|";
        i++;
        pval++;
    }
    cout<<endl;
}


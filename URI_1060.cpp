#include <bits/stdc++.h>

using namespace std;

main(){
    double num=0,cont=0,i=0;
    while(i<6){
        cin>>num;
        if(num > 0){
            cont++;
        }
        i++;
    }
    cout<<cont<<" valores positivos"<<endl;
}


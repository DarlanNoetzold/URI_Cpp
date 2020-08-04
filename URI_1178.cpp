#include <bits/stdc++.h>

using namespace std;

int main(){
    double n[100];
    double num;
    cin>>num;
    cout<<fixed<<setprecision(4);
    for(int i=0; i <= 99; i++){
        if(i == 0){
            n[i] = num;
            cout<<"N["<<i<<"] = "<<n[i]<<endl;
        }else{
        n[i] = n[i-1]/2.0;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
        }
    }
    return 0;
}

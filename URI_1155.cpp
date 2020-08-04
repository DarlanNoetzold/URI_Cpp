#include <bits/stdc++.h>

using namespace std;

main(){
    double s =1.0;

    for(int i=2; i<=100;i++){
        s = s + (1.0/i);
    }
    cout<<fixed<<setprecision(2);
    cout<<s<<endl;
}

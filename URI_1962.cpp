#include <iostream>
using namespace std;

main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n>=2015){
            cout << ((n-2015)+1) << " A.C." << endl;
        }
        else
            cout << (2015-n) << " D.C." << endl;
    }

}

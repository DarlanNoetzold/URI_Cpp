#include <bits/stdc++.h>

using namespace std;
 
main(){
    char val[5];
    cout<<"Digite um numero: ";
    gets(val);
    
    switch(strlen(val)){
    case 1:
        cout<<val[0];
        break;
    case 2:
        do {
            cout << val[0] << " " << val[1]<< "\n";
        } while (next_permutation(val, val + 2));
        break;
    case 3:
        do {
            cout << val[0] << " " << val[1] << " " << val[2] << "\n";
        } while (next_permutation(val, val + 3));
        break;
    case 4:
        do {
            cout << val[0] << " " << val[1] << " " << val[2] << " " << val[3] << "\n";
        } while (next_permutation(val, val + 4));
        break;
    default:
        break;
    }

}
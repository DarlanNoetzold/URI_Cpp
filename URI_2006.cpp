#include <bits/stdc++.h>
using namespace std;

main(void){
    int n;
    cin >> n;

    int cont = 0;
    for(int i = 0, b; i < 5; i++){
        cin >> b;
        if(n == b)
            cont++;
    }

    cout << cont << endl;

}

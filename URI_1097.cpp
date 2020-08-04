#include <iostream>

using namespace std;

main(){
    int j = 7;
    for(int i = 1; i <= 9; i++){
            cout << "I=" << i << " " << "J=" << j << "\n";
            cout << "I=" << i << " " << "J=" << j-1 << "\n";
            cout << "I=" << i << " " << "J=" << j-2 << "\n";
            i++;
            j+=2;
    }
}

#include <iostream>
using namespace std;

main(){
    int a, p, i, b;

    int par[5];
    int impar[5];

    p = 0;
    i = 0;

    for(int j = 0; j < 15; j++){
            std::cin >> a;
            if(a%2 == 0){
                    par[p] = a;
                    p++;
            }else{
                  impar[i] = a;
                  i++;
            }

            if(p == 5){
                 b = 0;
                 while(b != 5){
                    cout << "par[" << b << "] = " << par[b] << "\n";
                    b++;
                    }
                 p = 0;
            }
            if(i == 5){
                 b = 0;
                 while(b != 5){
                    cout << "impar[" << b << "] = " << impar[b] << "\n";
                    b++;
                    }
                 i = 0;
            }
            if(j == 14){
                 b = 0;
                 while(b < i){
                    cout << "impar[" << b << "] = " << impar[b] << "\n";
                    b++;
                 }
                 b = 0;
                 while(b < p){
                    cout << "par[" << b << "] = " << par[b] << "\n";
                    b++;
                    }
            }

    }
}

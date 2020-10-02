#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    int i = 0;
    while(i < 10){
        int n = rand();
        if(n%2 == 1){
            cout<<"\nNovo número: "<< n;
            i++;
        }
    }

}

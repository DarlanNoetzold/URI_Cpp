#include<iostream>
#include<math.h>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c;

    cout<<"Digite 3 valores: ";
    cin>> a;
    cin>> b;
    cin>> c;

    int maior = ((a + b) + fabs(a - b))/2;
    int maior2 = ((maior + c) + fabs(maior - c))/2;
    cout<<maior2;

}

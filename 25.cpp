#include<iostream>
#include<cmath>

using namespace std;

main(){
    int a,b,c, maiorab, maiorab2;

    cout << "Digite o primeiro valor: ";
    cin >> a;

    cout << "Digite o primeiro valor: ";
    cin >> b;

    cout << "Digite o primeiro valor: ";
    cin >> c;

    maiorab = (a + b + abs(a-b))/2;
    maiorab2 = (maiorab + c + abs(maiorab-c))/2;

    cout << maiorab2 << " eh maior.\n\n\n";

}

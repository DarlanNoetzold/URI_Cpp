#include<iostream>

using namespace std;

main(){
    float tempC, temF;

    cout<<"Digite a temperatura e Celsius: ";
    cin >> tempC;

    temF = 180*(tempC+32)/100;

    cout << "A temperatura em Fahrenheit e igual a: " << temF;
}


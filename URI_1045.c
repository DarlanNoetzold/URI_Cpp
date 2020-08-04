#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int a,b,c;

	cin>>a>>b>>c;

	if(a >= (b+c)){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(pow(a,2) == (pow(b,2) + pow(c,2))){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(pow(a,2)>(pow(b,2) + pow(c,2))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(pow(a,2)<pow(b,2) + pow(c,2)){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }else if(a == b && b==c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }else if(a == b || a == c || b == c){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}


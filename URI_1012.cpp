#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double A;
	double B;
	double C;
	cin >> A>>B>>C;
	
	double areaTri = (A * C)/2;
	double areaCirc = 3.14159 * pow(C, 2);
	double areaTrap = ((A + B) *C)/2;
	double areaQuad = B*B;
	double areaRet = A * B;
	
	cout << fixed << setprecision(3);
	
	cout<<"TRIANGULO: "<<areaTri<<"\n";
	cout<<"CIRCULO: "<<areaCirc<<"\n";
	cout<<"TRAPEZIO: "<<areaTrap<<"\n";
	cout<<"QUADRADO: "<<areaQuad<<"\n";
	cout<<"RETANGULO: "<<areaRet<<endl;
}

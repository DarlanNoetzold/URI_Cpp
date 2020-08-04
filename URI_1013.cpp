#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	int res;
	int maior;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	res = (a+b+abs(a-b))/2;
	maior = (res+c+abs(res-c))/2;
	
	cout<<maior<<" eh o maior"<<endl;
	
	
}

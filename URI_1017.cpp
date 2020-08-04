#include<iostream>
#include<iomanip>
using namespace std;

main(){
	int horas,velMed;
	double lit, dist;

	cin>>horas>>velMed;
	
	dist = velMed * horas;
	lit = dist/12;
	
	cout<<fixed<<setprecision(3);
	cout<<lit<<endl;

	
	
}

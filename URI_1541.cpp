#include <iostream>
#include <math.h>
using namespace std;

main(){


	int a,b,c;
	double result;

	while(cin >> a && a != 0){
		cin >> b >> c;
		result = (a*b*100)/c;
		cout << floor(sqrt(result)) << endl;
	}
}

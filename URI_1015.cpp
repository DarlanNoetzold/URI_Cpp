#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x1;
    double y1;
    double x2;
    double y2;
    double val;

    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;

    val = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));

    cout << fixed << setprecision(4);
    cout <<val<<endl;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    double y;
    double consMed;
    cin>>x;
    cin>>y;

    consMed = x/y;

    cout << fixed << setprecision(3);
    cout << consMed << " km/l"<<endl;

}

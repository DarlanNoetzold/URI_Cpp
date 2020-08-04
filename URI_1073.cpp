#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int num,i=1;
    cin>>num;

    while(i<=num){
        if(i%2==0){
            cout<<i<<"^2 = "<<i*i<<endl;
        }
        i++;
    }


}


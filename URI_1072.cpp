#include <iostream>
using namespace std;

main(){
    int casTest,in=0,out=0,i=0,num;
    cin>> casTest;

    while(i<casTest){
        cin>>num;
        if(num >= 10 && num <= 20){
           in++;
        }else{
            out++;
        }
        i++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double media=0,nota;
    int n=0;
    while(n<2){
        cin>>nota;
        if(nota>=0 and nota<=10){
            media += nota;
            n++;
        }else{
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<media/2.0<<endl;

}

#include <iostream>

using namespace std;

int main(){
    int cas, num;
    string pi, pn;
    cin>>cas;

    for(int i = 0; i< cas;i++){
        cin>>num;
        if(num == 0){
            cout<<"NULL"<<endl;
            continue;
        }
        if(num%2==0){
            cout<<"EVEN ";
        }else{
            cout<<"ODD ";
        }
        if(num>0){
            cout<<"POSITIVE"<<endl;
        }else if(num< 0){
            cout<<"NEGATIVE"<<endl;
        }
    }

}


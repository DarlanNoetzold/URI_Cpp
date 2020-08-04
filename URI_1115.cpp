#include <iostream>

using namespace std;

int main(){
    int x,y;
    while(true){
        cin>>x>>y;
        if(x>0 and y>0){
            cout<<"primeiro"<<endl;
        }else if(x<0 and y>0){
            cout<<"segundo"<<endl;
        }else if(x<0 and y<0){
            cout<<"terceiro"<<endl;
        }else if(x>0 and y<0){
            cout<<"quarto"<<endl;
        }
        if(x==0 or y==0){
            break;
        }
    }
}

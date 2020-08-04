#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i=1,g,t,grV=0,inV=0,emp=0,cont=0;
    while(i==1){
        cin>>t>>g;
        cont++;
        if(g>t){
            grV++;
        }else if(t>g){
            inV++;
        }else{
            emp++;
        }
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>i;

    }
    cout<<cont<<" grenais"<<endl;
    cout<<"Inter:"<<inV<<endl;
    cout<<"Gremio:"<<grV<<endl;
    cout<<"Empates:"<<emp<<endl;
    if(inV>grV){
        cout<<"Inter venceu mais"<<endl;
    }else if(grV>inV){
        cout<<"Gremio venceu mais"<<endl;
    }

}


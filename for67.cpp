#include<iostream>

using namespace std;

main(){
    int n;
    cout<<"Informa um número: "<<endl;
    cin>>n;
    cout<<"Tabuada de "<<n<<endl;

    for(int i =1; i < 11;i++){
        cout<<i<<" x "<<n<<" = "<<i*n<<endl;
    }
}

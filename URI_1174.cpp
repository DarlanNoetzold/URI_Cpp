#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define TAM 5

void print(float vet[], int i){
    cout<<"A["<<i<<"] = "<<vet[i]<<endl;
}

char teste(string x, int a=1){
    return x[a];
}

int main(){
//	float vet[TAM];
//	cout.precision(1);
//    for(int i=0; i<TAM;i++){
//        cin>>vet[i];
//        }
//    for(int i=0; i<TAM;i++){
//        if(vet[i]<=10){
//            cout<<fixed;
//            print(vet, i);
//        }
//    }
//

    string a = "Darlan";
    cout<<teste(a, 2);
    return 0;
}

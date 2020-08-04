    #include <iostream>

using namespace std;

int main(){
    int temp;
    cout<<"Digite o tempo em minutos: ";
    cin>>temp;

    switch(temp){
    case 15:
        cout<<170<<" calorias\n";
        break;
    case 30:
        cout<<350<<" calorias\n";
        break;
    case 60:
        cout<<700<<" calorias\n";
        break;
    case 90:
        cout<<1050<<" calorias\n";
        break;
    case 120:
        cout<<1400<<" calorias\n";
        break;

    }
}


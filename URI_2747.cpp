#include <iostream>
using namespace std;
int main(){
    int i;
    char   line[40] = "---------------------------------------";
    char middle[40] = "|                                     |";
    cout<<line<<"\n";
    for(i = 0; i < 5; i++){
        cout<<middle<<"\n";
    }
    cout<<line<<"\n";
    return 0;
}

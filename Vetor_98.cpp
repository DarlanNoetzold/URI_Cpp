#include<bits/stdc++.h>
using namespace std;
#define NUM 10
#define NUM2 20
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int a[NUM], b[NUM], v[NUM2];

    for(int i =0;i<NUM;i++){
        cout<<"Digite dois valores: ";
        cin>>a[i];
        cin>>b[i];
    }
    sort(a, a+NUM);
    sort(b, b+NUM);
    for (int i = 0, j = 0, it = 0; i < NUM; it++) {
            if (i >= NUM) {
                v[it] = b[j];
                j++;
            } else if (j >= NUM) {
                v[it] = a[i];
                i++;
            } else {
                if (a[i] <= b[j]) {
                    v[it] = a[i];
                    i++;
                } else {
                    v[it] = b[j];
                    j++;
                }
            }
        }

        for (int jt = 0; jt < NUM2; jt++) {
            cout<<"\n"<<v[jt];
        }

}

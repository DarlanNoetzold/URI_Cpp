#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <strings.h>
using namespace std;
main() {
    int num,i;
    string s;
    scanf("%d",&num);
    for (i = 0; i <=num; i++) {
        getline(cin,s);
        if(i!=0){
            printf("I am Toorg!\n");
        }
    }
}

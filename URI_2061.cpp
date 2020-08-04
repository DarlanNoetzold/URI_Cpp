#include <stdio.h>
#include <string.h>
main(){
    int n, m;
    char temp[10];
    scanf("%d %d", &n, &m);
    int cnt = n;
    while(m--){
        scanf("%s", temp);
        if(temp[0] == 'f') cnt++;
        else cnt--;
    }
    printf("%d\n", cnt);
}

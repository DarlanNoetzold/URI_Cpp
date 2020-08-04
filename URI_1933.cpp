#include<stdio.h>

main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==b) printf("%d\n",a);
        else if(a>b) printf("%d\n",a);
        else printf("%d\n",b);
    }
}

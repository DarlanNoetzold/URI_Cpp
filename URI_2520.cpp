#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,c,r;
    while(scanf("%d %d",&n,&m) != EOF){
       int ans[101][101];
     for(int i = 0;  i < n ;i++){
       for(int j = 0; j < m ;j++){
        scanf("%d",&ans[i][j]);
        if(ans[i][j] == 1) a = i,b = j;
        if(ans[i][j] == 2) r = i, c = j;
       }
     }
       int res = 0;
       res = abs(c - b) + abs(r - a);
       printf("%d\n",res);
    }
    return 0;
}

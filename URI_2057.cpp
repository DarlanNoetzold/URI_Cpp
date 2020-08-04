#include <bits/stdc++.h>
using namespace std;

main(){
  int s,t,f;
  cin >> s >> t >> f;
  int ans=s+t+f;
  if(ans<0) ans +=24;
  if(ans>=24) ans-=24;
  cout << ans << endl;

}

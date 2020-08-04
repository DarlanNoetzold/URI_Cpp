#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, c = 1;
  while(cin >> n)
  {
    vector<int> print;
    print.push_back(0);
    for(int i = 0; i <= n; ++i)
    {
      for(int j = 0; j < i; ++j)
      {
        print.push_back(i);
      }
    }
    if(print.size() == 1)
      printf("Caso %d: %d numero\n", c++, 1);
    else
      printf("Caso %d: %d numeros\n", c++, print.size());
    printf("%d", print[0]);
    for(int i = 1; i <print.size(); ++i)
    {
      printf(" %d", print[i]);
    }
    printf("\n\n");
  }
}

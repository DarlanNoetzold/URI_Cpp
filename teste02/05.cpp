MoKi ? Hoje ?s 09:12
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
void avaliar (int *vetor);

main ()
{
   int vetor[10], x = 21;
   int *px = new int();
   int *pvet;
    pvet = vetor;
    
    cout<<sizeof(vetor)<<endl;
    cout<<sizeof(*px)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(*pvet)<<endl;
    cout<<sizeof(char)<<endl;
}
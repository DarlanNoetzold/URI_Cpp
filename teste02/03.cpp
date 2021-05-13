#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
void avaliar (int *vetor);

main ()
{
    int vetor[10] = {3,6,22,44,78,8,12,10,40,71};
    int x;
    avaliar(vetor);
    for(x = 0; x< 5; x++)
    {
       cout << vetor[x] << ",";
    }
}

void avaliar (int *vetor)
{
    int *aux = new int[10];
    int *j = new int;
    int *i = new int(2);
    for(*j = 0; *j <= 4; (*j)++)
    {
        *aux = *vetor + *i;
        vetor = vetor + *j;
        if(*aux >= *vetor) {
            *vetor = *aux;
            cout << *vetor << ",";
        }
        (*i)++;
    }
}
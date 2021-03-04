#include <bits/stdc++.h>
using namespace std;

void troca(char v[], int i, int j)
{
	char aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void permuta(char v[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			cout<<v[i];
		cout<<"\n";
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(v, inf, i);
			permuta(v, inf + 1, sup);
			troca(v, inf, i); // backtracking
		}
	}
}

int main()
{
    char v[4];
    cout<<"Digite o n?mero: ";
    gets(v);
	int tam_v = sizeof(v);

	permuta(v, 0, tam_v - 1);

	return 0;
}
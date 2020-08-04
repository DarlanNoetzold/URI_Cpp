#include <iostream>
#include <cstring>

#define MAX 1000010
using namespace std;

long long n, m[MAX], v[MAX], s=0, g=0;

void steal(long long position){
	if(!v[position]) g++;
	v[position] = 1;

	if(m[position]%2==0){
		if(m[position]){
			s++;
			m[position]--;
		}
		if(position!=1)
			steal(position-1);
	}
	else{
		if(m[position]){
			s++;
			m[position]--;
		}
		if(position!=n)
			steal(position+1);
	}
}

int main(){
	long long total = 0;

	scanf("%lld", &n);
	memset(m, -1, sizeof m);
	memset(v, 0, sizeof v);

	for(int i=1; i<=n; i++){
		scanf("%lld", &m[i]);
		total+=m[i];
	}

	steal(1);

	printf("%lld %lld\n", g, total-s);
	return 0;
}

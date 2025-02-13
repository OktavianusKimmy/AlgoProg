#include <stdio.h>

int main(){
	long long int hit, damage=0;
	scanf("%d", &hit);
	for(int i=0; i<hit; i++){
		damage += 100 + (i*50);
	}
	printf("%lld\n", damage);
	return 0;
}

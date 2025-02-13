#include <stdio.h>

int main(){
	long long int a1, b1, c1, d1;
	long long int a2, b2, c2, d2;
	long long int a3, b3, c3, d3;

	scanf("(%lld+%lld)x(%lld-%lld)", &a1, &b1, &c1, &d1);
	getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a2, &b2, &c2, &d2);
	getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a3, &b3, &c3, &d3);
	getchar();
	
	long long int x = (a1+b1)*(c1-d1);
	long long int y = (a2+b2)*(c2-d2);
	long long int z = (a3+b3)*(c3-d3);

	printf("%lld %lld %lld\n", x, y, z);
	return 0;
}

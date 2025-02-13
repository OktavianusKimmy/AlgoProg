#include <stdio.h>

int main(){
	long long int a1, b1, c1, d1;
	long long int a2, b2, c2, d2;
	long long int a3, b3, c3, d3;
	
	scanf("(%lld+%lld)x(%lld-%lld)", &a1, &b1, &c1, &d1); getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a2, &b2, &c2, &d2); getchar();
	scanf("(%lld+%lld)x(%lld-%lld)", &a3, &b3, &c3, &d3); getchar();
	long long int count1 = (a1+b1)*(c1-d1);
	long long int count2 = (a2+b2)*(c2-d2);
	long long int count3 = (a3+b3)*(c3-d3);

	printf("%lld %lld %lld\n", count1, count2, count3);
	
	return 0;
}

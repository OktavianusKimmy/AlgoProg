#include <stdio.h>

int main(){
	int t, d1, i1, d2, i2, d3, i3, a;
	scanf("%d", &t);
	scanf("%d %d", &d1, &i1);
	scanf("%d %d", &d2, &i2);
	scanf("%d %d", &d3, &i3);
	
	d1>>=i1;
	d2>>=i2;
	d3>>=i3;
	printf("%d\n", d1&1);	
	printf("%d\n", d2&1);	
	printf("%d\n", d3&1);	
	return 0;
}

#include <stdio.h>

int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.4f%%\n", (b/a)*100);
	return 0;
}

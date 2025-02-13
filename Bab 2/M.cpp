#include <stdio.h>

int main(){
	float x, y;
	scanf("%f %f", &x, &y);
	printf("%.2f%%\n", (x/y)*100);
	return 0;
}

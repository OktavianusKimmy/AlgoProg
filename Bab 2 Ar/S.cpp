#include <stdio.h>

int main(){
	float l, b, h;
	scanf("%f %f %f", &l, &b, &h);
	double count1 = (b*h);
	double count2 = 3*(b*l);
	printf("%.3f\n", count1+count2);
	return 0;
}

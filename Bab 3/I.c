#include <stdio.h>

int main(){
	float t, a, b, c, i;
	scanf("%f", &t);

	for(i=1; i<=t; i++){
		scanf("%f %f %f", &a, &b, &c);
		printf("Case #%.0f: ", i);
		float x = a*(b/100);
		if(x>c){
			printf("%.0f\n", c);
		}
		else if(x<=c){
			printf("%.0f\n", x);
		}
	}
	return 0;
}

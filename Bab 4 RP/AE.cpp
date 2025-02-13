#include <stdio.h>

int main(){
	int t;
	float jari, tinggi;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%f %f", &jari, &tinggi);
		float count = (((jari*2)*3.14)*tinggi) + (2*(jari*jari*3.14));
		printf("Case #%d: %.2f\n", i, count);
	}
	return 0;
}

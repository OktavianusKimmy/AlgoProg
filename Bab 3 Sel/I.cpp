#include <stdio.h>

int main(){
	float t, hargaKopi, persenCB, maxCashback, count;
	scanf("%f", &t);
	for(float i = 1; i<=t; i++){
		scanf("%f %f %f", &hargaKopi, &persenCB, &maxCashback);
		count = persenCB/100;
		float CB = hargaKopi * count;
		printf("Case #%.0f: ", i);
		if(CB > maxCashback){
			printf("%.0f\n", maxCashback);
		}
		else{
			printf("%.0f\n", CB);
		}
	}
	return 0;
}

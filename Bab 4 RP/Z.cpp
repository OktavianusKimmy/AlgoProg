#include <stdio.h>

int main(){
	int dadu, mataDadu, sum = 0;
	scanf("%d", &dadu);
	for(int i = 1; i <= dadu; i++){
		scanf("%d", &mataDadu);
		if(mataDadu >= 2 && mataDadu <= 12){
			sum += mataDadu;
			if(sum >= 40){
				sum -= 40;
			}
			if(sum == 12){
				sum = 28;
			}
			else if(sum == 35){
				sum = 7;
			}
			else if(sum == 30){
				sum = 10;
			}
		}
		else{
			continue;
		}
	}
	printf("%d\n", sum);
	return 0;
}

/*
12 = 28
35 = 7
30 = 10

*/

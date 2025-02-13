#include <stdio.h>

int main(){
	int i, n, j, l, b, x, nilaiorg=0;
	scanf("%d", &n);
	scanf("%d %d %d", &j, &l, &b);
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		nilaiorg += x;
	}
	float k = (nilaiorg+j+l+b)/(n+3.0); //rata rata
	if(j>=k){
		printf("Jojo lolos\n");
	}
	else{
		printf("Jojo tidak lolos\n");
	}
	if(l>=k){
		printf("Lili lolos\n");
	}
	else{
		printf("Lili tidak lolos\n");
	}
	if(b>=k){
		printf("Bibi lolos\n");
	}
	else{
		printf("Bibi tidak lolos\n");
	}
	return 0;
}

#include <stdio.h>

int main(){
	int t, n;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d", n);
		for(int j=1; j<=n-1; j++){
			printf(" ");
		}
		for(int k=n; k>=1; k--){
			if(n%2==0){
				printf("#");
			}
			else{
				printf("*");
			}
		}
	printf("\n");
	}
	return 0;
}

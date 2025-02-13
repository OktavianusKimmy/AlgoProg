#include <stdio.h>

int main(){
	int n, k, i, a, m=0;
	scanf("%d %d", &n, &k);
	
// 1.................
	for(i = 0; i<n; i++){
		for(a = 0; a<n; a++){
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	
// 2.................
	
	for(i=1; i<=n; i++){
		for(a=1; a<=n; a++){
			if(i % k == 0){
				printf("#");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
	
// 3..................
	
	for(i=1; i<=n; i++){
		for(a=1; a<=n; a++){
			if(a%k==0){
				printf("#");
			}
			else{
				printf(".");
			}
		}
		printf("\n");
	}
	
	return 0;
}

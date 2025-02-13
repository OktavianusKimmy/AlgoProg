#include <stdio.h>

int main(){
	int testCase, tinggi;
	scanf("%d", &testCase);
	for(int i=1; i<=testCase; i++){
		scanf("%d", &tinggi);
		printf("Case #%d:\n", i);
		for(int i = 1; i<=tinggi; i++){
			for(int k = tinggi; k>=1; k--){
				printf(" ");
				for(int l = 1; l<=tinggi; l++){
					printf("#");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

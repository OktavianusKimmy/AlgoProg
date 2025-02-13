#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int size;
		scanf("%d", &size);
		for(int a = 1; a<=size; a++){
			for(int b = 1; b<=size-a; b++){
				printf(" ");
			}
			for(int c = 1; c<=a; c++){
				printf("*");
			}
			for(int d = 2; d<=a; d++){
				printf("*");
			}
			printf("\n");
		}
	}
}

#include <stdio.h>

int main(){
	int ulang, size;
	scanf("%d %d", &ulang, &size);
	for(int i = 1; i<=ulang; i++){
		for(int a = 1; a<=size; a++){
			for(int b = 1; b<=size-a; b++){
				printf(" ");
			}
			for(int c = 1; c<=a; c++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

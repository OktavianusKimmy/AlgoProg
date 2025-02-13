#include <stdio.h>

int main(){
	int t, z, b;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%d", &z);
		printf("Case #%d:\n", i);
		for(int a = 1; a <= z; a++){
			for(b = 1; b <= z-a; b++){
				printf(" ");
			}
			for(int c = 1; c<=a; c++){
				if((a+b+c)%2 == 0){
					printf("#");
				}
				else{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

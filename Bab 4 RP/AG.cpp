#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int leng;
		int a = 1;
		scanf("%d", &leng);
		printf("Case %d:", i);
		for(int z = 1; z<=leng; z++){
			printf(" %d", a);
			a += z;
		}
		printf("\n");
	}
	return 0;
}

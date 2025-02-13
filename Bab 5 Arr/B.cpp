#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlAngka, angkaA[101], angkaB[101], hasil[101];
		scanf("%d", &jmlAngka);
		for(int a = 0; a<jmlAngka; a++){
			scanf("%d", &angkaA[a]);
		}
		for(int b = 0; b<jmlAngka; b++){
			scanf("%d", &angkaB[b]);
		}
		printf("Case #%d:", i);
		for(int c = 0; c<jmlAngka; c++){
			hasil[c] = angkaA[c] - angkaB[c];
			printf(" %d", hasil[c]);
		}
		printf("\n");
	}
}

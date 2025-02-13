#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		scanf("%d", &n);
		int angka[n+2][n+2];
		for(int a = 1; a<=n; a++){
			for(int b = 1; b<=n; b++){
				scanf("%d", &angka[a][b]);
			}
		}
		int count[n+10];
		count[1] = 0;
		for(int c = 1; c<=n; c++){
			for(int d = 1; d<=n; d++){
				count[c] = count[c] + angka[d][c];
			}
		}
		printf("Case #%d:", i);
		for(int e = 1; e<=n; e++){
			printf(" %d", count[e]);
		}
		printf("\n");
//		printf("%d", angka[1][2]);
//		printf("%d", angka[2][2]);
//		printf("%d", angka[3][2]);
		
	}
	return 0;
}

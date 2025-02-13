#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		scanf("%d", &n);
		long long int angka[n+2][n+2];
		long long int count[n+2];
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				scanf("%lld", &angka[a][b]);
			}
		}
		
		// 1 2
		// 3 4
		for(int a = 0; a<n; a++){
			count[a] = 0;
		}
		
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				count[a] += angka[b][a];
			}
		}
		printf("Case #%d:", i);
		for(int a = 0; a<n; a++){
			printf(" %lld", count[a]);
		}
		printf("\n");
	}
	return 0;
}

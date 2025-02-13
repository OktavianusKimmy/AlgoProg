#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	
	for(int t = 1; t<=tc; t++){
		int n;
		scanf("%d", &n);
		int matrixA[55][55];
		int matrixB[55][55];
		int matrixC[55][55];
		for(int b = 0; b<n; b++){
			for(int c = 0; c<n; c++){
				scanf("%d", &matrixA[b][c]);
			}
		}
		
		for(int b = 0; b<n; b++){
			for(int c = 0; c<n; c++){
				scanf("%d", &matrixB[b][c]);
			}
		}
		
		for(int b = 0; b<n; b++){
			for(int c = 0; c<n; c++){
				scanf("%d", &matrixC[b][c]);
			}
		}
		
		
		int sum[55][55] = {0};
		
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				for(int i = 0; i<n; i++){
					sum[a][b] += matrixA[a][i] * matrixB[i][b];
				}
			}
		}
		
		int sum2[55][55] = {0};
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				for(int i = 0; i<n; i++){
					sum2[a][b] += sum[a][i] * matrixC[i][b];
				}
			}
		}
		
		printf("Case #%d:\n", t);
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				if(b != 0){
					printf(" ");
				}
				printf("%d", sum2[a][b]);
			}
			printf("\n");
		}
		
		
	}
	
}

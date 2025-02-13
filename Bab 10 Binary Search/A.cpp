#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int A[n+3];
	for(int i = 1; i<=n; i++){
		scanf("%d", &A[i]);
	}
	
	int half = n/2;
	// misal 4, half = 2
	
	int Q;
	for(int i = 1; i<=m; i++){
		int Q;
		scanf("%d", &Q);
		int flag = 0;
		for(int j = half, k = half-1; k>=1 || j <= n; j++, k--){
			if(Q == A[j]){
				printf("%d\n", j);
				flag = 1;
				break;
			}
			if(Q == A[k]){
				printf("%d\n", k);
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("-1\n");
	}
	
	
}

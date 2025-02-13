#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int A[n+3];
	for(int i = 1; i<=n; i++){
		scanf("%d", &A[i]);
	}
	
	int half = n/2;
	
	int Q;
	for(int i = 1; i<=m; i++){
		scanf("%d", &Q);
		int flag = 0;
		if(Q<A[half]){
			for(int j = half; j>=1; j--){
				if(Q == A[j]){
					printf("%d\n", j);
					flag = 1;
					break;
				}
			}
		}
		else if(Q>=A[half]){
			for(int j = half; j<=n; j++){
				if(Q == A[j]){
					printf("%d\n", j);
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0) printf("-1\n");
	}
}

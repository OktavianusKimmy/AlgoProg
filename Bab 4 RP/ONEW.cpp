#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 0; t < tc; t++){
		int N, M, Q;
		scanf("%d %d %d", &N, &M , &Q);
		int X, temp = 0, max=0;
		for(int i = 0; i < N; i++){
			scanf("%d", &X);
			if(X <= M){
				temp=X;
			}
			if(temp > max){
				max = temp;
			}
		}
		printf("Case #%d: ", t+1);
		if (max > Q){
			printf("%d\n", max);
		}
		else{
			printf("%d\n", Q);
		}
		}
	}

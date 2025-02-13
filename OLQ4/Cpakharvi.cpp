#include <stdio.h>

int N[100005];

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n, m, a;
		scanf("%d %d", &n, &m);
		for(int i = 1; i<=n; i++){
			N[i] = 0;
		}
		for(int i = 0; i<m; i++){
			scanf("%d", &a);
			N[a]++;
		}
		int count = 0;
		for(int i = 1; i<=n; i++){
			if(N[i] > 0){
				count++;
			}
		}
		printf("Case #%d: %d\n", t, m - count);
	}
	return 0;
}

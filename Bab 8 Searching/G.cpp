#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n, k;
		scanf("%d %d", &n, &k);
		int count = 0;
		for(int i = 0; i<n; i++){
			int a;
			scanf("%d", &a);
			if(a >= k) count++;
		}
		printf("Case #%d: %d\n", t, count);
	}
}

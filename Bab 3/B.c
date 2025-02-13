#include <stdio.h>

int main(){
	int t, k, n, m, i;
//	k = butuh
//	n = kepunyaan
//	m = yg ada di toko
	
	scanf("%d", &t);
	for(i = 1; i<=t; i++){
		scanf("%d %d %d", &k, &m, &n);
		int a = m + n;
		printf("Case #%d:", i);
		if(a >= k){
			printf(" yes\n");
		}
		else{
			printf(" no\n");
		}
	}
	return 0;
}

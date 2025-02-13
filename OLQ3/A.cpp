#include <stdio.h>

int main(){
	int tc, a, b;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d %d", &a, &b);
		int count = ((a/b)<<b);
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}

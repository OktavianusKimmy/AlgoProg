#include <stdio.h>

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);
	for(i=0; i<m+1; i++){
		printf("%d\n", n);
		n++;
	}
	return 0;
}

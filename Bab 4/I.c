#include <stdio.h>

int main(){
	int n, isi, total=0, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &isi);
		total += isi;
	}
	printf("%d\n", total);
	return 0;
}

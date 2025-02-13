#include <stdio.h>

int main(){
	int tc;
	int uang;
	int count = 0;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d", &uang);
		count += uang;
	}
	printf("%d\n", count);
	return 0;
}

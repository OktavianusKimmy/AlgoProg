#include <stdio.h>

int main(){
	int tc, a, b, c, bibi = 0;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(c < b){
			bibi++;
		}
		else{
			continue;
		}
	}
	printf("%d\n", bibi);
	return 0;
}

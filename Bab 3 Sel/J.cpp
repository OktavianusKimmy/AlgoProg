#include <stdio.h>

int main(){
	int x, y, k;
	scanf("%d %d %d", &x, &y, &k);
	
	if(x<=k && k<=y){
		if((k-x) == (y-k)){
			printf("%d\n", k-x);
		}
	}
	else{
		printf("-1\n");
	}
	
	return 0;
}

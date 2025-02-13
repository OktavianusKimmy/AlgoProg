#include <stdio.h>

int main(){
	int t, a, b;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", i);
		if((a*b)%2 != 0){
			printf("Need more frogs\n");
		}
		else{
			printf("Party time!\n");
		}
	}
	return 0;
}

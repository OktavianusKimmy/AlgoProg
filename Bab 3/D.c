#include <stdio.h>

int main(){
	int t, a, b;
	scanf("%d", &t);
	int i;
	for(i = 1; i<=t; i++){
		scanf("%d %d", &a, &b);
		printf("Case #%d: ", i);
		if((a*b)%2 == 0){
			printf("Party time!\n");
		}
		else{
			printf("Need more frogs\n");
		}
		
	}
}

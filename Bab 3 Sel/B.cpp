#include <stdio.h>

int main(){
	int t, a, b, c;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &a, &b, &c);
		printf("Case #%d: ", i);
		if((b+c)>=a){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}

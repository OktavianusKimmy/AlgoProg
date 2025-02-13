#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i<t; i++){
		int a;
		scanf("%d", &a);
		if(a == 1){
			puts("not easy");
			return 0;
		}
	}
	puts("easy");
	return 0;
}

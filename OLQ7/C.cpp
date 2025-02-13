#include <stdio.h>

int jobo(int n){
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else if(n == 2) return 1;
	else{
		return jobo(n-1) + jobo(n-3);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int sum = jobo(n);
	printf("%d\n", sum);
	return 0;
}

#include <stdio.h>

int cek(int a, int b){
	if(a == b){
		return 1;
	}
	if(a == 1){
		return 0;
	}
	else if(a % 2 == 0){
		cek(a/2, b);
	}
	else if(a % 2 == 1){
		cek((a*3)+1, b);
	}
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		int value = cek(a, b);
		if(value == 1) printf("Case #%d: YES\n", i);
		else if(value == 0)printf("Case #%d: NO\n", i);
	}
}

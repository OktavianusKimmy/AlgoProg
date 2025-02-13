#include <stdio.h>

void s(int n, char s1, char s2){
	if(n == 0){
		printf("%c", s1);
	}
	else if(n == 1){
		printf("%c", s2);
	}
	else{
		s(n-1, s1, s2); s(n-2, s1, s2);
	}
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		int n;
		char s1, s2;
		scanf("%d %c %c", &n, &s1, &s2);
		getchar();
		printf("Case #%d: ", i);
		s(n, s1, s2);
		printf("\n");
	}
}

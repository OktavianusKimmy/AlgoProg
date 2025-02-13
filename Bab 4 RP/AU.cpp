#include <stdio.h>

int main(){
	int tc, huruf;
		
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d", &huruf);
		printf("Case #%d: ", i);
		for(int a = 97; a<=97+huruf-1; a++){
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}

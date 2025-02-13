#include <stdio.h>

int main(){
	int testCase, tinggi, lebar;
	scanf("%d", &testCase);
	for(int i=1; i<=testCase; i++){
		scanf("%d %d", &tinggi, &lebar);
		printf("Case #%d:\n", i);
		for(int a = 1; a<=tinggi; a++){
			for (int b=1; b<=lebar; b++){
				if ((b > 1 && b < lebar) && (a>1 && a<tinggi)){
					printf(" ");
				}
				else printf("#");
			}
			printf("\n");
		}
	}
}

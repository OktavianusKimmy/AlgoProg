#include <stdio.h>

int main(){
	int count=0, cage, animal;
	scanf("%d", &cage);
	for(int i = 1; i <= cage; i++){
		scanf("%d", &animal);
		count += animal;
	}
	printf("%d\n", count);
	return 0;
}

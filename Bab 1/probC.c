#include <stdio.h>

int main(){
	char N[100], A[9];
	int U;
	
	scanf("%[^\n]", N);
	scanf("%s %d", A, &U);
	
//	printf("Name: %s\n", N);
//	printf("NIS: %s\n", A);
//	printf("Age: %d\n", U);
	
	printf("Name: %s\nNIS: %s\nAge: %d\n", N, A, U);
	return 0;
}


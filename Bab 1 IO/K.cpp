#include <stdio.h>

int main(){
	char x[150];
	char nis[100];
	int age;
	
	scanf("%[^\n]", &x);
	getchar();
	scanf("%s %d", &nis, &age);
	getchar();
	printf("Name: %s\n", x);
	printf("NIS: %s\n", nis);
	printf("Age: %d\n", age);
	return 0;
}

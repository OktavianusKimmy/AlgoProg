#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int a, b;
	fscanf(file, "%d %d\n", &a, &b);
	printf("%d\n", a+b);
	fclose(file);
	return 0;
}

#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	
	char nim[100][20], nama[100][30];
	for(int i = 0; i<n; i++){
		fscanf(file, "%s %[^\n]\n", nim[i], nama[i]);
	}
	
	for(int i = 0; i<n; i++){
		printf("%s %s\n", nim[i], nama[i]);
	}
}

#include <stdio.h>
#include <string.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int x;
	fscanf(file, "%d\n", &x);
	char nim[100][20], nama[100][50];
	for(int i = 0; i<x; i++){
		fscanf(file, "%s %s\n", nim[i], nama[i]);
	}
	int n;
	fscanf(file, "%d\n", &n);
	
	for(int i = 1; i<=n; i++){
		char findNim[100];
		fscanf(file, "%s\n", findNim);
		o
		int flag = 0;
		printf("Case #%d: ", i);
		for(int a = 0; a<x; a++){
			if(strcmp(findNim, nim[a]) == 0){
				printf("%s\n", nama[a]);
				flag = 1;
				break;
			}
		}
		if(flag == 0) printf("N/A\n");
	}
}

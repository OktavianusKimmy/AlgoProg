#include <stdio.h>
#include <string.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int x;
	fscanf(file, "%d\n", &x);
	char singkat[105][100], ori[105][100];
	for(int i = 0; i<x; i++){
		fscanf(file, "%[^#]#%[^\n]\n", singkat[i], ori[i]);
	}
	int n;
	fscanf(file, "%d\n", &n);
	for(int i = 0; i<n; i++){
		char string[105];
		fscanf(file, "%[^\n]\n", string);
		printf("Case #%d:\n", i+1);
		char *token;
		token = strtok(string, " ");
		int b = 1;
		while(token != NULL){
			if(b != 1) {
				printf(" ");
			}
			b++;
			int flag = 0;
			for(int a = 0; a<x; a++){
				if(strcmp(token, singkat[a]) == 0){
					printf("%s", ori[a]);
					flag = 1;
					break;
				}
			}
			if(flag == 0) printf("%s", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
		
	}
	return 0;
}

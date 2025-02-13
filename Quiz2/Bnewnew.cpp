#include <stdio.h>
#include <string.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	int min;
	fscanf(file, "%d\n", &min);
	int count = 0;
	int flag = 0; // correct
	int page = 0;
	char string[60];
	while(fscanf(file, "%s", string) != EOF){
		if(strcmp(string, "#") == 0){
			page++;
			if(count < min){
				printf("page %d: %d word(s)\n", page, count);
				flag = 1; // incorrect
			}
			count = 0;
		}
		else count++;
	}
	if(flag == 0){
		puts("The essay is correct");
	}
}

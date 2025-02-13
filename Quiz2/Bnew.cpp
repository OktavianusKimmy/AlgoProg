#include <stdio.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	
	int min;
	fscanf(file, "%d\n", &min);
	
	int i = 0;
	int count = 0;
	char string[100][1000];
	while(fscanf(file, "%[^\n]\n", string[i]) != '\0'){
		i++;
	}
	int b = 0;
	while(string[i][b] != '\0'){
		if(string[i][b] == ' ') count++;
		b++;
	}
	if(string[i][b] == '#'){
		if(count < min) printf("%d\n", count);
		else{
			printf("correct\n");
		}
		count = 0;
	}
}

#include <stdio.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	
	int x;
	fscanf(file, "%d\n", &x);
//	int hash = 0;
	char string[100];
	int countSpace = 0;
	
	int pos = 1;
	int i = 0;
	while(fscanf(file, "%[^\n]\n", string[i]) != EOF){
		if(string[i] == '#'){
			pos++;
			countSpace = 0;
		}
		else{
			for(int a = 0; string[i] != '\0'; a++){
				if(string[a] == ' '){
					countSpace++;
				}
			}
		}

		if(countSpace < x){
			printf("page %d: %d word(s)\n", pos, countSpace);
		}
		else{
			puts("The essay is correct");
		}
	}
	
	
}

#include <stdio.h>
#include <string.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int tc;
	fscanf(file, "%d\n", &tc);
	for(int t = 1; t<=tc; t++){
		char s[105];
		fscanf(file, "%[^\n]", s); fgetc(file);
		int n;
		fscanf(file, "%d", &n); fgetc(file);
		int l = strlen(s);
		int temp[30] = {0};
		for(int i = 1; i<=n; i++){
			char from, to;
			fscanf(file, "%c %c", &from, &to); fgetc(file);
			if(temp[from - 'A'] == 0){
				for(int a = 0; a<l; a++){
					if(s[a] == from) s[a] = to;
				}
				temp[from - 'A'] = 1;
			}
			else continue;
		}
		
		int alfabet[30] = {0};
		
		for(int a = 0; a<l; a++){
			alfabet[s[a] - 'A'] += 1;
		}
		
		for(int a = 0; a<26; a++){
			if(alfabet[a] > 0){
				printf("%c %d\n", a+'A', alfabet[a]);
			}
		}
	}
}

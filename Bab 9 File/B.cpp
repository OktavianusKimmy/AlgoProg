#include <stdio.h>
#include <string.h>

/*
A B C D E F G H J I K L M N O P Q R S T U V W X Y Z
^                                                 
*/

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int tc;
	fscanf(file, "%d", &tc);
	for(int i = 1; i<=tc; i++){
		int k;
		fscanf(file, "%d\n", &k);
		char s[1002];
		fscanf(file, "%[^\n]\n", s);
		int l = strlen(s);
		printf("Case #%d: ", i);
		for(int a = 0; a<l; a++){
			switch (s[a]){
				case '0':
					s[a] = 'O';
					break;
				case '1':
					s[a] = 'I';
					break;
				case '3':
					s[a] = 'E';
					break;
				case '4':
					s[a] = 'A';
					break;
				case '5':
					s[a] = 'S';
					break;
				case '6':
					s[a] = 'G';
					break;
				case '7':
					s[a] = 'T';
					break;
				case '8':
					s[a] = 'B';
					break;
			}
			
			if(s[a] == ' ') printf(" ");
			else{
				s[a] -= k;
				while(s[a] < 'A'){
					s[a] += 26;
				}
				printf("%c", s[a]);
				
			}
		}
		printf("\n");
	}
	return 0;
}

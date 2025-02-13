#include <stdio.h>
#include <string.h>

int main(){
	char kata[1001];
	scanf("%[^\n]", kata);
	getchar();
	int l = strlen(kata), count[30];
	for(int i = 0; i<30; i++){
		count[i] = 0;
	}
	for(int i = 0; i<l; i++){
		if('a' <= kata[i] && kata[i] <= 'z'){
			count[kata[i] - 'a']++;
		}
		else if('A' <= kata[i] && kata[i] <= 'Z'){
			count[kata[i] - 'A']++;
		}
	}
	int countAlfabet = 0;
	for(int i = 0; i<26; i++){
		countAlfabet += count[i] > 0;
	}
	if(countAlfabet == 26){
		printf("pangram\n");
	}
	else{
		printf("not pangram\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	char word[1005];
	scanf("%s", &word);
	getchar();
	int l = strlen(word);
	int count = 0;
	for(int i = 0; i<l; i++){
		for(int j = 0; j<l; j++){
			if(i == j){
				continue;
			}
			else if(word[i] != word[j]){
				count++;
			}
		}
	}
	if(l%2 == 1){
		count += 1;
	}
	printf("%d\n", count);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char word[1005];
		scanf("%s", word);
		int l = strlen(word);
		printf("Case %d: ", i);
		for(int a = 0; a<l; a++){
			if(a != l-1){
				printf("%d-", word[a]);
			}
			else{
				printf("%d\n", word[a]);
			}
		}
	}
	return 0;
}

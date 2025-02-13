#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		char sentence[1001];
		scanf("%[^\n]", sentence);
		getchar();
		int l = strlen(sentence);
		printf("Case #%d : ", i);
		for(int a = l-1; a>=0; a--){
			printf("%c", sentence[a]);
		}
		printf("\n");
	}
	return 0;
}

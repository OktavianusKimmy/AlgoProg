#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char kalimat[105];
		scanf("%s", kalimat);
		int l = strlen(kalimat);
		int fix;
		scanf("%d", &fix);
		char from, to;
		for(int a = 1; a<=fix; a++){
			scanf("%c %c", &from, &to);
			for(int b = 0; b<l; b++){
				if(strcmp(kalimat[b], from) == 0){
					strcpy(kalimat[b], to);
				}
			}
		}
		
		//print
		for(int a = 0; a<l; a++){
			printf("%c", kalimat[a]);
		}
		printf("\n");
		
	}
}

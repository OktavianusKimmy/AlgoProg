#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char kalimat[1005];
		scanf("%s", kalimat);
		getchar();
		int l = strlen(kalimat);
		int fix;
		scanf("%d", &fix);
		char from[fix+5], to[fix+5];
		for(int a = 0; a<fix; a++){
			scanf("%s %s", &from[a], &to[a]);
		}
		
		for(int a = 0; a<fix; a++){
			for(int b = 0; b<l; b++){
				if(kalimat[b] == from[a]){
					kalimat[b] = to[a];
				}
			}
		}
		
		//print
		printf("Case #%d: ", i);
		for(int a = 0; a<l; a++){
			printf("%c", kalimat[a]);
		}
		printf("\n");
		
	}
}

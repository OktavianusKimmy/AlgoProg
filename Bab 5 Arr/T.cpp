#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int x = 1; x<=tc; x++){
		char string[1001];
		char a[] = {'A', 'B', 'C', 'D', '\0', '\0'};
		char e[] = {'E', 'F', 'G', 'H', '\0', '\0'};
		char i[] = {'I', 'J', 'K', 'L', 'M', 'N'};
		char o[] = {'O', 'P', 'Q', 'R', 'S', 'T'};
		char u[] = {'U', 'V', 'W', 'X', 'Y', 'Z'};
		scanf("%s", string);
		int l = strlen(string);
		int index[l];
		for(int n = 0; n<l; n++){
			for(int b = 0; b<6; b++){
				if(string[n] == a[b]){
					string[n] = 'A';
					index[n] = b;
				}
				else if(string[n] == e[b]){
					string[n] = 'E';
					index[n] = b;
				}
				else if(string[n] == i[b]){
					string[n] = 'I';
					index[n] = b;
				}
				else if(string[n] == o[b]){
					string[n] = 'O';
					index[n] = b;
				}
				else if(string[n] == u[b]){
					string[n] = 'U';
					index[n] = b;
				}
			}
			
		}
		printf("Case #%d:\n", x);
		printf("%s\n", string);
		for(int i = 0; i<l; i++){
			printf("%d", index[i]);
		}
		printf("\n");
	}
}

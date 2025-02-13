#include <stdio.h>
#include <string.h>

int main(){
	char x[1005];
	char y[1005];
		
	scanf("%[^\n]", x);
	getchar();
	scanf("%[^\n]", y);
	getchar();
	int l = strlen(x);
	for(int a = 0; a<l; a++){
		if(x[a] == ' '){
			printf("szs ");
		}
		else if(a == l-1){
			printf("%cszs", x[a]);
		}
		else{
			printf("%c", x[a]);
		}
	}
	printf("\n");
	
//	scanf("%[^\n]", y);
	int z = strlen(y);
	for(int a = 0; a<z; a++){
		if(y[a] == ' ' || y[a] == '\0'){
			printf("szs ");
		}
		else if(a == z-1){
			printf("%cszs", y[a]);
		}
		else{
			printf("%c", y[a]);
		}
	}
	printf("\n");
	
	return 0;
}

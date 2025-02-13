#include <stdio.h>
#include <string.h>

struct Hero{
	char nama[50];
};

int main(){
	int n;
	scanf("%d", &n);
	Hero ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s", ppti[i].nama);
	}
	char find[50];
	scanf("%s", find);
	int flag = 0;
	for(int i = 0; i<n; i++){
		if(strcmp(ppti[i].nama, find) == 0){
			flag = 1;
		}
	}
	if(flag == 1) printf("Found\n");
	else printf("Not Found\n");
}

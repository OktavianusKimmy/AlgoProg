#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct People{
	char nama[100];
};

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	People ppti[n+2];
	for(int i = 0; i<n; i++){
		fscanf(file, "%s\n", ppti[i].nama);
	}
	
	int x;
	fscanf(file, "%d\n", &x);
	for(int i = 0; i<x; i++){
		char target[100];
		fscanf(file, "%s\n", target);
		int idx = -1;
		for(int a = 0; a<n; a++){
			if(strcmp(ppti[a].nama, target) == 0){
				idx = a;
				break;
			}
		}
		printf("%d\n", idx);
	}
	
}

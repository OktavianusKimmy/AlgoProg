#include <stdio.h>
#include <string.h>

struct orang{
	char nama[1005];
	int p;
};

void swap(orang *a, orang *b){
	orang temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	scanf("%d", &n);
	orang ppti[n+2];
	for(int i = 0; i<n; i++){
		char name[1005];
		int a, b;
		scanf("%s %d %d", name, &a, &b);
		strcpy(ppti[i].nama, name);
		ppti[i].p = a * b;
	}
	orang temp;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(ppti[j].p < ppti[j+1].p){
				temp = ppti[j];
				ppti[j] = ppti[j+1];
				ppti[j+1] = temp;
//				printf("%s %d\n\n", ppti[j].nama, ppti[j].p);
//				printf("%s %d\n\n", ppti[j+1].nama, ppti[j+1].p);
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		printf("%s %d\n", ppti[i].nama, ppti[i].p);
	}
}

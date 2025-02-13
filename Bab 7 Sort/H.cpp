#include <stdio.h>
#include <string.h>

struct Word{
	char acak[205];
};

void swap(Word *a, Word *b){
	Word temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n); getchar();
	Word ppti[205];
	for(int i = 0; i<m; i++){
		scanf("%s", ppti[i].acak); getchar();
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			for(int k = 0; k<m-1; k++){
				if(ppti[j].acak[k] > ppti[j].acak[k+1]){
					char temp = ppti[j].acak[k];
					ppti[j].acak[k] = ppti[j].acak[k+1];
					ppti[j].acak[k+1] = temp;
				}
			}
		}
	}
	/*
	1 5 3 6
	1 5
	1 3
	1 6
	
	5 3 -> 3 5
	3 6
	
	1 3 5 6
	
	*/
	for(int i = 0; i<n ;i++){
		for(int j = i; j<n; j++){
			if(j == i) continue;
			else{
				if(strcmp(ppti[i].acak, ppti[j].acak) < 0){
					swap(&ppti[i], &ppti[j]);
				}
			}
		}
		
	}
	
	for(int i = 0; i<n; i++){
		printf("%s\n", ppti[i].acak);
	}
}

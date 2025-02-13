#include <stdio.h>
#include <string.h>

struct Kata{
	char word[1000];
};

void swap(Kata *a, Kata *b){
	Kata temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSortNaik(Kata arr[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-1-i; j++){
			if(strcmp(arr[j].word, arr[j+1].word) > 0){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void bubbleSortTurun(Kata arr[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-1-i; j++){
			if(strcmp(arr[j].word, arr[j+1].word) < 0){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	Kata ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s", ppti[i].word);
	}
	int num;
	scanf("%d", &num);
	if(num == 0){
		bubbleSortNaik(ppti, n);
	}
	else{
		bubbleSortTurun(ppti, n);
	}
	for(int i = 0; i<n; i++){
		printf("%s\n", ppti[i].word);
	}
}

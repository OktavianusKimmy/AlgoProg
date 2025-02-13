#include <stdio.h>
#include <string.h>

struct dic{
	char word[105];
	int page;
};

void swap(dic *a, dic *b){
	dic temp = *a;
	*a = *b;
	*b = temp;
}

int partition(dic arr[], int low, int high){
	dic pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(strcmp(arr[j].word, pivot.word) < 0){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quicksort(dic arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quicksort(arr, low, pi-1);
	quicksort(arr, pi+1, high);
}

int main(){
	int n;
	scanf("%d", &n);
	dic ppti[10002];
	for(int i = 0; i<n; i++){
		scanf("%s", ppti[i].word);
	}
	
	quicksort(ppti, 0, n-1);
	int m;
	scanf("%d", &m);
	int a = 1;
	int b = 1;
	for(int i = 0; i<n; i++){
		if(b > m){
			b = 1;
			a++;
		}
		ppti[i].page = a;
		b++;
	}
	
	
	char find[105];
	scanf("%s", find);
	
	int idx = -1;
	for(int i = 0; i<n; i++){
		if(strcmp(ppti[i].word, find) == 0){
			idx = i;
			break;
		}
	}
	
	if(idx == -1){
		puts("Not Found");
	}
	else{
		printf("Found at %d\n", ppti[idx].page);
	}
	
}

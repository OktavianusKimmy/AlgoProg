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

int partition(Word arr[], int low, int high){
	char *pivot;
	strcpy(pivot, arr[high].acak);
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(strcmp(arr[j].acak, pivot) < 0){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Word arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	Word ppti[205];
	for(int i = 0; i<m; i++){
		scanf("%s", ppti[i].acak);
	}
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			for(int k = 0; k<n-1-i; k++){
				if(ppti[j].acak[k] > ppti[j].acak[k+1]){
					char temp = ppti[j].acak[k];
					ppti[j].acak[k] = ppti[j].acak[k+1];
					ppti[j].acak[k+1] = temp;
				}
			}
		}
	}
	
//	quickSort(ppti, 0, m-1);
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j<m; j++){
			if(j == i) continue;
			else{
				if(strcmp(ppti[i].acak, ppti[j].acak) > 0){
					swap(&ppti[i], &ppti[j]);
				}
			}
		}
		
	}
	
	for(int i = 0; i<m; i++){
		printf("%s\n", ppti[i]);
	}
}

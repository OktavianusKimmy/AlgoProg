#include <stdio.h>
#include <string.h>

struct Kata{
	char word[255];
	int page;
};

void swap(Kata *a, Kata *b){
	Kata temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Kata arr[], int low, int high){
	char *pivot;
	strcpy(pivot, arr[high].word);
	int i = low -1;
	for(int j = low; j<=high-1; j++){
		if(strcmp(arr[j].word, pivot) < 0){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Kata arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int binarySearch(Kata arr[], int low, int high, char *target){
	if(low > high) return -1;
	int mid = (low + high)/2;
	
	if(strcmp(arr[mid].word, target) == 0){
		return arr[mid].page;
	}
	else if(strcmp(arr[mid].word, target) > 0){
		return binarySearch(arr, low, mid-1, target);
	}
	else{
		return binarySearch(arr, mid+1, high, target);
	}
}

int main(){
	int n, x;
	scanf("%d", &n);
	scanf("%d", &x);
	Kata ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s", ppti[i].word);
	}
	int k = 1;
	for(int i = 0, j = 1; i<n; i++, j++){
		if(j > x){
			j = 1;
			k++;
		}
		ppti[i].page = k;
//		printf("%s %d\n", ppti[i].word, ppti[i].page);
	}
	char find[255];
	scanf("%s", find);
	int idx = binarySearch(ppti, 0, n-1, find);
	if(idx == -1) printf("0\n");
	else{
		printf("%d\n", binarySearch(ppti, 0, n-1, find));
	}
	
}

/*
10
3
am
encouraged
equally
expanded
got
inquiry
lots
passed
successful
tea
*/

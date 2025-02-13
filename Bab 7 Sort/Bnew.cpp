#include <stdio.h>
#include <string.h>

struct Plant{
	int num;
	char name[50];
};

void swap(Plant *a, Plant *b){
	Plant temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Plant arr[], int low, int high){
	char pivot[50];
	strcpy(pivot, arr[high].name);
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(strcmp(arr[j].name, pivot) < 0){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Plant arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int n;
	FILE *file = fopen("testdata.in", "r");
	
	fscanf(file, "%d\n", &n);
	Plant ppti[n+2];
	for(int i = 0; i<n; i++){
		fscanf(file, "%d#%[^\n]\n", &ppti[i].num, ppti[i].name);
	}
	quickSort(ppti, 0, n-1);
	for(int i = 0; i<n; i++){
		printf("%d %s\n", ppti[i].num, ppti[i].name);
	}
}

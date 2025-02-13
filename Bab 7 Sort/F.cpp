#include <stdio.h>
#include <string.h>

struct Tugas{
	char matkul[20];
	int dl;
};

void swap(Tugas *a, Tugas *b){
	Tugas temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Tugas arr[], int low, int high){
	Tugas pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j].dl < pivot.dl){
			i++;
			swap(&arr[j], &arr[i]);
		}
		else if(arr[j].dl == pivot.dl){
			if(strcmp(arr[j].matkul, pivot.matkul) < 0){
				i++;
				swap(&arr[j], &arr[i]);
			}
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Tugas arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int n;
	scanf("%d", &n);
	Tugas ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s %d", ppti[i].matkul, &ppti[i].dl);
	}
	quickSort(ppti, 0, n-1);
	for(int i = 0; i<n; i++){
		printf("%s\n", ppti[i].matkul);
	}
}

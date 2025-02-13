#include <stdio.h>
#include <string.h>

struct Student{
	char nim[15];
	char nama[25];
};

void swap(Student *a, Student *b){
	Student temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Student arr[], int low, int high){
	char pivot[15];
	strcpy(pivot, arr[high].nim);
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(strcmp(arr[j].nim, pivot) < 0){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Student arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int n;
	FILE *file = fopen("testdata.in", "r");
	fscanf(file, "%d\n", &n);
	Student ppti[n+2];
	for(int i = 0; i<n; i++){
		fscanf(file, "%s %s\n", ppti[i].nim, ppti[i].nama);
	}
	quickSort(ppti, 0, n-1);
	for(int i = 0; i<n; i++){
		printf("%s %s\n", ppti[i].nim, ppti[i].nama);
	}
}

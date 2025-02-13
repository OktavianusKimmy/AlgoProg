#include <stdio.h>
#include <string.h>

int countPerson = 0;

struct order{
	char nama[20];
	int rp;
};

int check(order arr[], char nama[], int rp){
	for(int i = 0; i<countPerson; i++){
		if(strcmp(arr[i].nama, nama) == 0){
			return i;
		}
	}
	return -1;
}

void swap(order *a, order *b){
	order temp = *a;
	*a = *b;
	*b = temp;
}

int partition(order arr[], int low, int high){
	int pivot = arr[high].rp;
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j].rp < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quicksort(order arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quicksort(arr, low, pi-1);
	quicksort(arr, pi+1, high);
}

int main(){
	FILE *file = fopen("testcase.in", "r");
	
	int n;
	fscanf(file, "%d\n", &n);
	
	order ppti[n+2];
	for(int i = 0; i<n; i++){
		char namaTemp[20];
		int rpTemp;
		fscanf(file, "%s %d\n", namaTemp, &rpTemp);
		int idx = check(ppti, namaTemp, rpTemp);
		// -1 kalo belum ada
		// 1 kalo ada
		if(idx == -1){
			strcpy(ppti[countPerson].nama, namaTemp);
			ppti[countPerson].rp = rpTemp;
			countPerson++;
		}
		else{
			ppti[idx].rp += rpTemp;
		}
	}
	quicksort(ppti, 0, countPerson-1);
	for(int i = 0; i < countPerson; i++){
		printf("%s %d\n", ppti[i].nama, ppti[i].rp);
	}
}

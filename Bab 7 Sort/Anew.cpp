#include <stdio.h>

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low - 1);
	
	for(int j = low; j < high; j++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quicksort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr, low, high);
		
		quicksort(arr, low, pi-1);
		quicksort(arr, pi+1, high);
	}
}


int main(){
	int n;
	scanf("%d", &n);
	int arr[n+2];
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	quicksort(arr, 0, n-1);
	int selisih[n] = {0};
	for(int i = 0; i<n-1; i++){
		selisih[i] = arr[i] - arr[i+1];
		if(selisih[i] < 0) selisih[i] *= -1;
	}
	
	int max = 0;
	for(int i = 0 ; i<n; i++){
		if(selisih[i] > max){
			max = selisih[i];
		}
	}
	
	int count = 0;
	for(int i = 0; i<n-1; i++){
		if(selisih[i] == max){
			count++;
			if(count != 1) printf(" ");
			printf("%d %d", arr[i], arr[i+1]);
		}
	}
	printf("\n");
	return 0;
}

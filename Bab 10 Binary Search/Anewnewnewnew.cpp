#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(int arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int binarySearch(int arr[], int low, int high, int target){
	if(low > high) return -2;
	int mid = (low + high)/2;
	
	if(arr[mid] == target){
		for(int i = low; i <= mid; i++){
			if(arr[i] == target) return i;
		}
	}
	
	if(target < arr[mid]) return binarySearch(arr, low, mid-1, target);
	else return binarySearch(arr, mid+1, high, target);
}

int main(){
	int jml, cari;
	scanf("%d %d", &jml, &cari);
	int arr[jml+2];
	for(int i = 0; i<jml; i++){
		scanf("%d", &arr[i]);
	}
//	quickSort(arr, 0, jml-1);
	for(int i = 0; i<cari; i++){
		int target;
		scanf("%d", &target);
		int idx = binarySearch(arr, 0, jml-1, target);
		if(idx == -1){
			printf("-1\n");
		}
		else{
			printf("%d\n", idx+1);
		}
	}
}

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
	if(low > high) return 0;
	int mid = low + (high - low)/2;
	
	if(arr[mid] == target) return mid;
	else if(target < arr[mid]) return binarySearch(arr, low, mid-1, target);
	else return binarySearch(arr, mid+1, high, target);
}

int main(){
	int arr[] = {1, 5, 2, 4, 3};
	
	quickSort(arr, 0, 4);
	
	for(int i = 0; i<5; i++){
		printf("%d ", arr[i]);
	}
	printf("\nSearch 5 (index) : %d\n", binarySearch(arr, 0, 4, 5));
}

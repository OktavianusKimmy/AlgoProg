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

void quicksort(int arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quicksort(arr, low, pi-1);
	quicksort(arr, pi+1, high);
}

int binarysearch(int arr[], int low, int high, int target){
	if(low > high) return -2;
	
	int mid = (low + high) / 2;
	if(arr[mid] == target) return mid;
	else if(target < arr[mid]) return binarysearch(arr, low, mid-1, target);
	else return binarysearch(arr, mid+1, high, target);
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n+2];
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	quicksort(arr, 0, n-1);
	int x;
	scanf("%d", &x);
	for(int i = 0; i<x; i++){
		int target;
		scanf("%d", &target);
		int idx = binarysearch(arr, 0, n-1, target);
		printf("%d\n", idx +1);
	}
}

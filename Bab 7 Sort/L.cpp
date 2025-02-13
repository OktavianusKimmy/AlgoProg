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

int recursiveBinary(int arr[], int low, int high, int target){
	if(low <= high){
		int mid = low + ((high-low)/2);
		
		if(arr[mid] == target){
			return mid;
		}
		if(target < arr[mid]){
			return recursiveBinary(arr, low, mid-1, target);
		}
		else{
			return recursiveBinary(arr, mid+1, high, target);
		}
	}
	return -2;
}

int main(){
	int n;
	scanf("%d", &n);
	int tinggi[n+2];
	for(int i = 0 ; i<n; i++){
		scanf("%d", &tinggi[i]);
	}
	quickSort(tinggi, 0, n-1);
	int m;
	scanf("%d", &m);
	for(int i = 0; i<m; i++){
		int target;
		scanf("%d", &target);
		int result = recursiveBinary(tinggi, 0, n-1, target);
		printf("%d\n", result+1);
	}
}

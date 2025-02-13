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

void quick(int arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quick(arr, low, pi-1);
	quick(arr, pi+1, high);
}

int main(){
	int t;
	int arr[30];
	scanf("%d", &t);
	for(int tc = 0; tc < t; tc++){
		for(int i = 0; i < 25; i++){
			scanf("%d", &arr[i]);
		}
		quick(arr, 0, 24);
		for(int i = 0; i < 25; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
		int y5 = arr[24] / 2;
		int y4 = arr[23] - y5;
		int y1 = arr[0] / 2;
		int y3 = arr[4] - y1;
		int y2 = arr[1] - y1;
		
		printf("Case #%d: %d %d %d %d %d\n", tc+1, y1, y2, y3, y4, y5);
	}
	
	return 0;
}

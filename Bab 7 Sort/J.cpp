#include <stdio.h>

void swap(double *a, double *b){
	double temp = *a;
	*a = *b;
	*b = temp;
}

double partition(double arr[], int low, int high){
	double pivot = arr[high];
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

void quickSort(double arr[], int low, int high){
	if(low >= high) return;
	double pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n;
		scanf("%d", &n);
		double arr[n+2];
		double sum = 0;
		for(int i = 0; i<n; i++){
			scanf("%lf", &arr[i]);
			sum += arr[i];
		}
		quickSort(arr, 0, n-1);
		printf("Case #%d:\n", t);
		printf("Mean : %.2lf\n", sum/n);
		printf("Median : ");
		if(n%2 == 1){
			printf("%.2lf\n", arr[(n/2)]);
		}
		else{
			printf("%.2lf\n", (arr[n/2] + arr[(n/2)-1])/2);
		}
	}
}

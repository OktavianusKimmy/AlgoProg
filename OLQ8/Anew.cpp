#include <stdio.h>

void sort(int arr[], int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	long long int arr[n+2] = {0};
	for(int i = 0; i<n; i++){
		fscanf(file, "%lld\n", &arr[i]);
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
//	for(int i = 0; i<n; i++){
//		printf("%d ", arr[i]);
//	}
	
	for(int i = n-1; i>=0; i--){
		for(int a = 0; a<i; a++){
			for(int b = a+1; b<i; b++){
				if(arr[i] < arr[a] + arr[b]){
					printf("YES\n");
					return 0;
				}
			}
		}
	}
	
	printf("NO\n");
	fclose(file);
	return 0;
	
}

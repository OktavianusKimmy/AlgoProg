#include <stdio.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	int arr[n+2];
	for(int i = 0; i<n; i++){
		fscanf(file, "%d\n", &arr[i]);
		arr[i] *= arr[i];
	}
//	for(int i = 0; i<n; i++){
//		printf("%d ", arr[i]);
//	}
	
	for(int i = 0; i<n; i++){
		for(int j= 0; j<n; j++){
			for(int k = 0; k<n; k++){
				if(i == k || i == j || k == j) continue;
				if(arr[i] == arr[k] + arr[j] || 
					arr[j] == arr[i] + arr[j] || 
					arr[k] == arr[i] + arr[j]){
						printf("YES\n");
						fclose(file);
						return 0;
					}
			}
		}
	}
	printf("NO\n");
	fclose(file);
	return 0;
	
}

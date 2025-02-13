#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n, time;
		scanf("%d %d", &n, &time);
		int arr[n+2];
		for(int i = 0; i<n; i++){
			scanf("%d", &arr[i]);
		}
		int i = 0;
		int count = 0;
		while(i < n-1){
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				count++;
				i = 0;
			}
			else{
				i++;
			}
		}
		printf("Case #%d: %d\n", t, count*time);
	}
}

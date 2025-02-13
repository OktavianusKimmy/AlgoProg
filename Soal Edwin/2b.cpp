#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n+2];
	int maxCount = 0;
	int count = 0;
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 1){
			count++;
		}
		else{
			if(count > maxCount) maxCount = count;
			count = 0;
		}
	}
	printf("%d\n", maxCount);
}

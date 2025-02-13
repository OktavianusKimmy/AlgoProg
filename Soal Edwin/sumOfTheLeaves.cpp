#include <stdio.h>

int sum = 0;

void tree(int arr[], int low, int high, int sum){
	sum += arr[low];
	int branch = 0;
	
	if(low * 2 <= high){
		tree(arr, low*2, high, sum);
		branch = 1;
	}
	if((low * 2) + 1 <= high){
		tree(arr, (low*2)+1, high, sum);
		branch = 1;
	}
	
	if(branch == 0) printf("%d\n", sum);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		int arr[n+2];
		for(int i = 1; i<=n; i++){
			scanf("%d", &arr[i]);
		}
		int a = 1;
		int sum = 0;
		tree(arr, a, n, sum);
//		printf("%d\n", sum);
	}
}

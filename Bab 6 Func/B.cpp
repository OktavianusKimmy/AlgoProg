#include <stdio.h>

void tree(int arr[105], int n, int a, int sum){
	sum += arr[a];
	int branch = 0;
	if((2*a)<=n){
//		sum += arr[2*a];
		branch = 1;
		tree(arr, n, 2*a, sum);
	}
	if((2*a) + 1 <= n){
//		sum += arr[2*a+1];
		branch = 1;
		tree(arr, n, 2*a+1, sum);
	}
	if(branch == 0) printf("%d\n", sum);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int arr[105];
		int n;
		scanf("%d", &n);
		// 1 2 3 4 5 6 7
		for(int a = 1; a<=n; a++){
			scanf("%d", &arr[a]);
		}
		int a = 1;
		int sum = 0;
		printf("Case #%d:\n", i);
		tree(arr, n, a, sum);
	}
}

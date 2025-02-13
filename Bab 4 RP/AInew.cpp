#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1 ; i<=tc; i++){
		int sumleft = 0;
		int sumright = 0;
		int n;
		scanf("%d", &n);
		int arr[n+2] = {0};
		for(int a = 0; a<n; a++){
			scanf("%d", &arr[a]);
			sumright += arr[a];
		}
		
		int flag = 0;
		for(int a = 0; a<n; a++){
			sumleft += arr[a];
			sumright -= arr[a];
			if(sumleft == sumright){
				flag = 1;
				break;
			}
		}
		printf("Case #%d: %s\n", i, flag == 1? "Yes" : "No");
		
	}
}

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n+5];
	int flag = 0;
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
		for(int j = 0; j<i; j++){
			if(arr[j] == arr[i]){
				printf("Terdapat Duplikat\n");
				flag = 1;
				return 0;
			}
		}
	}
	printf("Tidak terdapat Duplikat\n");
}

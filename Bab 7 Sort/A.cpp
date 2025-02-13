#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	int angka[n+2];
	for(int i = 0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-1; j++){
			if(angka[j] > angka[j+1]){
				int temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		printf("%d ", angka[i]);
	}
	
	return 0;
}

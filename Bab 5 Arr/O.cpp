#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int angka[105][105];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%d", &angka[i][j]);
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			int temp = angka[i][j];
			for(int k = 1; k<n; k++){
				if(j+k > n){
					break;
				}
				if(temp == angka[i][j+k] || temp == angka[j+k][i]){
					puts("Nay");
					return 0;
				}
			}
		}
	}
	puts("Yay");
	return 0;
}

#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		scanf("%d", &n);
		long long int angka[n+2];
		for(int a = 0; a<n; a++){
			angka[a] = 0;
		}
		for(int a = 0; a<n; a++){
			scanf("%lld", &angka[a]);
		}
		
		long long int temp = 0;
		for(int a = 1; a<n; a++){
			if(angka[a] < angka[a-1]){
				temp = angka[a];
				angka[a] = angka[a-1];
				angka[a-1] = temp;
			}
		}
		for(int b = 1; b<n; b++){
			if(angka[b] < angka[b-1]){
				temp = angka[b];
				angka[b] = angka[b-1];
				angka[b-1] = temp;
			}
		}
		printf("Case #%d: %lld\n", i, angka[n-1]+angka[n-2]);
	}
	return 0;
}

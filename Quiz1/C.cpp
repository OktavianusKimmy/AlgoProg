#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int jml;
		scanf("%lld", &jml);
		long long int angka[jml+2];
		for(int a = 0; a<jml; a++){
			angka[a] = 0;
		}
		// 1 2 3 3 3
		// 0 1 2 3 4
		
		// mencari apakah ada nilai input yang sama
		// jika sama, diubah menjadi 0
		for(int a = 0; a<jml; a++){
			scanf("%lld", &angka[a]);
			for(int b = 0; b<a; b++){
				if(angka[a] == angka[b]){
					angka[b] = 0;
					break;
				}
			}
		}
		
		// mencari nilai array yang lebih dari 0
		// (karena nilai yang sama sudah diubah menjadi 0, tersisa 1 index yang memiliki value tsb)
		long long int count = 0;
		for(int a = 0; a<jml; a++){
			if(angka[a] > 0){
				count++;
			}
		}
		printf("Case #%d: %lld\n", i, count);
	}
	return 0;
} 

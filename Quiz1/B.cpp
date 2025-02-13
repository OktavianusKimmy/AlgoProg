#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int angka[n+2];
	for(int a = 0; a<n; a++){
		angka[a] = 0;
	}
	for(int i = 0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	
	//mencari nilai ganjil minimal
	int min = 0;
	for(int a = 0; a<n; a++){
		for(int b = 0; b<n; b++){
			if(angka[b] > 0 && (angka[b]%2) == 1){
				min = angka[b];
				break;
			}
		}
		if(min > angka[a]){
			min = angka[a];
		}
	}
	
//	printf("%d\n", min);
	
	// mencari total seluruh angka
	long long int total = 0;
	for(int a = 0; a<n; a++){
		total += angka[a];
	}
	
	long long int tot = total;
	// apabila hasilnya ganjil, maka akan dikurangi nilai ganjil minimal
	if(tot%2 == 1){
		printf("%d\n", total-min);
	}
	else{
		printf("%d\n", total);
	}
	
	
}

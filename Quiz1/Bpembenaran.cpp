#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int angka[100005];
	for(int a = 0; a<100005; a++){
		angka[a] = 0;
	}
	for(int i = 0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	
	//mencari nilai ganjil minimal
	int min = 100000;
	for(int a = 0; a<n; a++){
		if(min > angka[a] && (angka[a]%2) == 1){
			min = angka[b];
			break;
		}
	}
	
//	printf("%d\n", min);
	
	// mencari total seluruh angka
	long long int total = 0;
	for(int a = 0; a<n; a++){
		total += angka[a];
	}
	
	// apabila hasilnya ganjil, maka akan dikurangi nilai ganjil minimal
	if(total%2 == 1){
		printf("%lld\n", total-min);
	}
	else{
		printf("%lld\n", total);
	}
	
	
}

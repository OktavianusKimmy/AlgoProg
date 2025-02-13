#include <stdio.h>

int main(){
	int tc, jmlMainan, a, b, c, d;
	
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d %d %d %d %d", &jmlMainan, &a, &b, &c, &d);
		int kotak[jmlMainan];
		int mainanSisa = 0;
		//assign semua kotak full
		for(int z = 1; z<=jmlMainan; z++){
			kotak[z] = 1;
		}
		
		//membuang mainan kelipatan a b c d
		for(int j = a; j<=jmlMainan;  j+=a){
			kotak[j] = 0;
		}
		
		for(int k = b; k<=jmlMainan;  k+=b){
			kotak[k] = 0;
		}
		
		for(int l = c; l<=jmlMainan;  l+=c){
			kotak[l] = 0;
		}
		
		for(int m = d; m<=jmlMainan;  m+=d){
			kotak[m] = 0;
		}
		
		for(int y = 1; y<=jmlMainan; y++){
			mainanSisa += kotak[y];
		}
		
		//count buang berapa = jumlah mainan yg dipunya - sisa hasil pembuangan
		int count = jmlMainan - mainanSisa;
		
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}

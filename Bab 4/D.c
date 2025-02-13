#include <stdio.h>

//tangga
// 9 -> 21
// 33 -> 42
// 76 -> 92
//ular 
// 53 -> 37
// 80 -> 59
// 97 -> 88


int main(){
	int n, k, posisi=0;
	scanf("%d", &n);
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &k);
		if(k<=12 && k>=2){
			posisi += k;
		}
		else{
			posisi += 0;
		}
		if(posisi == 9){
			posisi = 21;
		}
		else if(posisi == 33){
			posisi = 42;
		}
		else if(posisi == 76){
			posisi = 92;
		}
		else if(posisi == 53){
			posisi = 37;
		}
		else if(posisi == 80){
			posisi = 59;
		}
		else if(posisi == 97){
			posisi = 88;
		}
		else if(posisi > 30000){
			posisi = 30000;
		}
	}
	printf("%d\n", posisi);
	return 0;
}

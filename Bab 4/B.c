#include<stdio.h>

int main(){
	int posisi=0, k, n;
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		scanf("%d", &k);
		if(k>=2 && k<=12){
			posisi += k;}
		else{
			posisi+=0;} 
		printf("%d\n", posisi);
		if(posisi == 30){
			posisi = 10;
		}
		else if(posisi == 12){
			posisi = 28;
		}
		else if(posisi == 35){
			posisi = 7;
		}
		else if(posisi >= 40){
			posisi %= 40;
		}
		printf("%d\n", posisi);
	}
		
	printf("%d\n", posisi);
	return 0;
}

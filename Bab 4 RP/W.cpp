#include <stdio.h>

int main(){
	int banyakAngka, angka, genap = 0, ganjil = 0, tc;
	scanf("%d", &tc);
	int i = 1;
	while(i <= tc){
		scanf("%d", &banyakAngka);
		for(int a = 1; a <= banyakAngka; a++){
			scanf("%d", &angka);
			if(angka%2 == 0){
				genap += 1;
			}
			else if(angka%2 != 0){
				ganjil += 1;
			}
		}
		printf("Odd group : %d integer(s).\n", ganjil);
		printf("Even group : %d integer(s).\n\n", genap);
		ganjil = 0;
		genap = 0;
		i++;
	}
	return 0;
}

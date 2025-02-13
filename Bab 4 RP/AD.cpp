#include <stdio.h>

int main(){
	int prize;
	scanf("%d", &prize);
	int angka[prize+5];
	for(int i = 0; i<prize; i++){
		scanf("%d", &angka[i]);
	}
	
	int max[prize+5];
	int angkaTemp[prize+5];
	for(int a = 0; angka[a] != '\0'; a++){
		for(int b = 0; angka[b] != '\0'; b++){
			if(angka[a] == angka[b]){
				max[a]++;
			}
		}
	}
	
	int banyak = 0;
	for(int c = 1; max[c] != '\0'; c++){
		if(max[c] > max[c-1]){
			banyak = max[c];
		}
	}
	
	printf("%d\n", banyak);
	
	return 0;
}

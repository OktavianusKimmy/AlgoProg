#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int area, peserta;
		scanf("%d %d", &area, &peserta);
		int luas[area], ambilTempat[peserta];
		int indeks;
		for(int b = 0; b<=area; b++){
			luas[b] = 0;
		}
		for(int a = 1; a<=peserta; a++){
			scanf("%d", &indeks);
			luas[indeks] = 1;
		}
		
		int treasure = 0;
		for(int c = 1; c<=area; c++){
			treasure += luas[c];
		}
		int tidakDapat = peserta-treasure;
		printf("Case #%d: %d\n", i, tidakDapat);
	}
}

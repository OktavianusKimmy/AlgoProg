#include <stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int ladang[x+2][y+2];
	for(int a = 1; a<=x; a++){
		for(int b = 1; b<=y; b++){
			scanf("%d", &ladang[a][b]);
		}
	}
	
	int t;
	scanf("%d", &t);
	for(int a = 1; a<=t; a++){
		int baris, kolom, ubah;
		scanf("%d %d %d", &baris, &kolom, &ubah);	
		ladang[baris][kolom] = ubah;
	}
	
	for(int a = 1; a<=x; a++){
		for(int b = 1; b<=y; b++){
			if(b == 1){
				printf("%d", ladang[a][b]);
			}
			else{
				printf(" %d", ladang[a][b]);
			}
		}
		printf("\n");
	}	
}

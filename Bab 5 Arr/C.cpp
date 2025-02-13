#include <stdio.h>

int main(){
	int tc, hargaBarang[101];
	int jmlPerubahan, barangKe, ganti;
	scanf("%d", &tc);
	for(int i = 0; i<tc; i++){
		scanf("%d", &hargaBarang[i]);
	}
	scanf("%d", &jmlPerubahan);
	for(int j = 1; j<=jmlPerubahan; j++){
		scanf("%d %d", &barangKe, &ganti);
		hargaBarang[barangKe-1] = ganti;
		printf("Case #%d:", j);
		for(int b = 0; b<tc; b++){
			printf(" %d", hargaBarang[b]);
		}
		printf("\n");
	}
	return 0;
}

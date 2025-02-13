#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlRumah;
		int tinggi[101];
		int selisih[101];
		int tingMin = 0;
		scanf("%d", &jmlRumah);
		int a = 0;
		
		for(a = 0; a<jmlRumah; a++){
			scanf("%d", &tinggi[a]);
		}
		for(int c = 0; c<a; c++){
			selisih[c] = tinggi[c]-tinggi[c+1];
			if(selisih[c]<0){
				selisih[c] = selisih[c] * (-1);
			}
		}
		
		tingMin = selisih[0];
		for(int b = 0; b<a-2; b++){
			if(selisih[b]>selisih[b+1]){
				continue;
			}
			tingMin = selisih[b];
		}
		printf("%d\n", tingMin);
	}
	return 0;
}

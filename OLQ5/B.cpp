#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int teman, bykCoklat;
		scanf("%d %d", &teman, &bykCoklat);
		int coklat[bykCoklat+5];
		int max[teman+5];
//		for(int c = 0; c<teman+5; c++){
//			max[c] = 0;
//		}
		
		
		for(int b = 0; b<teman; b++){
			max[b] = 0;
			for(int a = 0; a<bykCoklat; a++){
				scanf("%d", &coklat[a]);
				if(max[b] < coklat[a]){
					max[b] = coklat[a];
				}
			}
		}
		long long int total = 0;
		for(int d = 0; d<teman; d++){
			total += max[d];
		}
		printf("Case #%d: %lld\n", i, total);
		
	}
}

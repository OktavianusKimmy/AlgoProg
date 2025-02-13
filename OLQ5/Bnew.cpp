#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int teman, bykCoklat;
		scanf("%d %d", &teman, &bykCoklat);
		long long int count = 0;
		for(int a = 0; a<teman; a++){
			int coklat[bykCoklat];
			long long int max = 0;
			for(int b = 0; b<bykCoklat; b++){
				scanf("%d", &coklat[b]);
				if(max < coklat[b]){
					max = coklat[b];
				}
			}
			count = count + max;
		}
		printf("Case #%d: %lld\n", i, count);
	}
}

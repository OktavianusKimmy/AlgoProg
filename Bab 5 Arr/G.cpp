#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlTes;
		scanf("%d", &jmlTes);
		int tes[jmlTes+5];
		int min[jmlTes+5];
		for(int a = 0; a<jmlTes; a++){
			scanf("%d", &tes[a]);
		}
		for(int b = 0; b<jmlTes; b++){
			scanf("%d", &min[b]);
		}
		printf("Case #%d: ", i);
		int count = 0;
		for(int c = 0; c<jmlTes; c++){
			if(tes[c] < min[c]){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

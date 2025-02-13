
#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlRumah;
		scanf("%d", &jmlRumah);
		int rumah[jmlRumah+5];
		for(int a = 0; a<jmlRumah; a++){
			scanf("%d", &rumah[a]);
		}
		int minTing = 0;
		int selisih = 0;
		for(int b = 1; b<jmlRumah; b++){
			selisih = rumah[b] - rumah[b-1];
			if(selisih < 0){
				selisih *= -1;
			}
			if(b == 1){
				minTing = selisih;
			}
			if(minTing > selisih){
				minTing = selisih;
			}
		}
		printf("Case #%d: %d\n", i, minTing);
	}
	return 0;
}

#include <stdio.h>

int main(){
	int tc, jmlHlm, dituju;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d %d", &jmlHlm, &dituju);
		int depan = dituju/2;
		int belakang;
		if(jmlHlm%2 == 0){
			belakang = ((jmlHlm+1 - dituju)/2);
		}
		else{
			belakang = ((jmlHlm - dituju)/2);
		}
		
		if(depan > belakang){
			printf("Case #%d: %d\n", i, belakang);
		}
		else{
			printf("Case #%d: %d\n", i, depan);
		}
	}
	return 0;
}



//94 95
//96 97
//98 99
//100 101

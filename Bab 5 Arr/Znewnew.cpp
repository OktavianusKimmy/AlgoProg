#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char move[10005];
		int jmlLangkah, life;
		scanf("%d %d", &move, &life);
		scanf("%s", move);
		int l = strlen(move);
		int pertama, terakhir;
		int count = 0;
		for(int a = 0; a<l; a++){
			if(move[a] == '1'){
				count++;
			}
		}
		if(count >= 2){
			for(int a = 0, b = l-1; a<b; a++, b--){
				if(move[a] == '1'){
					pertama = a;
				}
				if(move[b] == '1'){
					terakhir = b;
				}
			}
		}
		else{
			puts("Dead");
			return 0;
		}
		
		if(pertama >= life){
//			if(l-1-terakhir >= life){
//				puts("Dead");
//			}
//			else{
				puts("Dead");
//			}
		}
		else{
			puts("Alive");
		}
	}
	return 0;
}

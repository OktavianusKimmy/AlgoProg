#include <stdio.h>

int main(){
	int tc, game=0;
	int games, winL = 0, winB = 0;
	
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d", &game);
		getchar();
		int games = game+1;
		char win[games];
		scanf("%[^\n]", win);
		getchar();
		for(int a = 0; a < games; a++){
			if(win[a] == 'L'){
				winL++;
			}
			else if(win[a] == 'B'){
				winB++;
			}
			else if(win[a] == 'T'){
				winL++;
				winB++;
			}
		}
		if(winL > winB){
			printf("Lili\n");
		}
		else if(winB > winL){
			printf("Bibi\n");
		}
		else{
			printf("None\n");
		}
		winL = 0;
		winB = 0;
	}
}

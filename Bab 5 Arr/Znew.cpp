#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int room, life;
		scanf("%d %d", &room, &life);
		char move[10002] = {0};
		scanf("%s", move);
		getchar();
		int alive=1; 
		
		// read room
		int countDepan = 0;
		int countBelakang = 0;
		// 001001000
		
		if(room <= life){
			printf("Alive\n");
			continue;
		}
		
		int hitung = 0;
		for(int a = 0; a<room; a++){
			if(move[a] == '1'){
				hitung++;
			}
		}
		printf("Case #%d: ", i);
		if(hitung > 1){
			for(int a = 0; a<room; a++){
				if(move[a] == '0'){
					countDepan++;
					if(countDepan==life){
						alive=0;
						break; 
					}
				}
				if(move[a]=='1'){
					break; //alve=1 
				}
			}
		
			for(int a = room-1; a>=0; a--){
				if(move[a] == '0'){
					countBelakang++;
					if(countBelakang == life){
						alive = 0;
						break;
					}
				}
				if(move[a] == '1'){
					break;
				}
			}
		
			if(alive == 1){
				printf("Alive\n");
			}
			else{
				printf("Dead\n");
			}
		}
		else{
			printf("Dead\n");
		}
		
	}
	return 0;
}

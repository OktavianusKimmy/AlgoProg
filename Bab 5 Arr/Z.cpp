#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int room, life;
		scanf("%d %d", &room, &life);
		char move[10002] = {0};
		for(int a = 0; a<room; a++){
			scanf("%c", &move[a]);
		}
		
		// read room
		int tempLife = life;
		int flag = 0;
		for(int a = 0; a<room; a++){
			if(move[a] == '0'){
				tempLife = tempLife - 1;
				if(tempLife == 0){
					printf("Dead\n");
					flag = 1;
					break;
				}
			}
			else if(move[a] == '1'){
				tempLife = life;
			}
			
			if(flag == 1){
				break;
			}
			
			if(a == room-1 && tempLife > 0){
				printf("Alive\n");
			}
		}
	}
	return 0;
}

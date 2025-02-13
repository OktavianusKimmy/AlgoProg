#include <stdio.h>

int count = 0;

bool valid(int x, int y, int batasX, int batasY){
	return x >= 0 && x < batasX && y >= 0 && y < batasY;
}

void cek(char room[105][105], int x, int y, int batasX, int batasY){
	if(room[x][y] == '.'){
		room[x][y] = '+';
		count++;
	}
	
	if(room[x][y+1] == '.' && valid(x, y+1, batasX, batasY)){
		cek(room, x, y+1, batasX, batasY);
	}
	if(room[x][y-1] == '.' && valid(x, y-1, batasX, batasY)){
		cek(room, x, y-1, batasX, batasY);
	}
	if(room[x+1][y] == '.' && valid(x+1, y, batasX, batasY)){
		cek(room, x+1, y, batasX, batasY);
	}
	if(room[x-1][y] == '.' && valid(x-1, y, batasX, batasY)){
		cek(room, x-1, y, batasX, batasY);
	}
	
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		getchar();
		char room[105][105];
		for(int a = 0; a<x; a++){
			scanf("%s", room[a]); getchar();
		}
		int pointerX, pointerY;
		for(int a = 0; a<x; a++){
			for(int b = 0; b<y; b++){
				if(room[a][b] == 'S'){
					pointerX = a;
					pointerY = b;
				} 
			}
		}
		
		cek(room, pointerX, pointerY, x, y);
		printf("Case #%d: ", i);
		printf("%d\n", count);
		count = 0;
	}
}

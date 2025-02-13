#include <stdio.h>

int count = 0;

bool valid(int x, int y, int a, int b){
	return x>=0 && x<a && y>=0 && y<b;
}

void cek(char map[105][105], int x, int y, int a, int b){
	if(map[x][y] == '*'){
		count++;
	}
	if(map[x][y] == '.' || map[x][y] == '*'){
		map[x][y] = '#';
	}

	
	if(map[x][y+1] != '#' && valid(x, y+1, a, b)) cek(map, x, y+1, a, b);
	if(map[x][y-1] != '#' && valid(x, y-1, a, b)) cek(map, x, y-1, a, b);
	if(map[x+1][y] != '#' && valid(x+1, y, a, b)) cek(map, x+1, y, a, b);
	if(map[x-1][y] != '#' && valid(x-1, y, a, b)) cek(map, x-1, y, a, b);
	
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		char map[105][105];
		for(int a = 0; a<x; a++){
			scanf("%s", map[a]);
			getchar();
		}
		
		int pointerX, pointerY;
		for(int a = 0; a<x; a++){
			for(int b = 0; b<y; b++){
				if(map[a][b] == 'P'){
					pointerX = a;
					pointerY = b;
				}
			}
		}
		
		cek(map, pointerX, pointerY, x, y);
		printf("Case #%d: %d\n", i, count);
		count = 0;
		
	}
}

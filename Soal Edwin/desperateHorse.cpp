#include <stdio.h>

int board[10][10];

void knight(int x, int y, int move){
	if(x < 0 || x >= 8 || y < 0 || y >= 8) return;
	if(move >= board[x][y]) return;
	
	board[x][y] = move;
	
	knight(x-2, y-1, move+1);
	knight(x-2, y+1, move+1);

	knight(x-1, y+2, move+1);
	knight(x+1, y+2, move+1);

	knight(x+2, y+1, move+1);
	knight(x+2, y-1, move+1);

	knight(x+1, y-2, move+1);
	knight(x-1, y-2, move+1);
	
}

int main(){
	int tc;
	scanf("%d", &tc); getchar();
	for(int t = 1; t<=tc; t++){
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				board[i][j] = 1000;
			}
		}
		char x1, y1, x2, y2;
		scanf("%c%c %c%c", &x1, &y1, &x2, &y2); getchar();
		x1 -= 'A';
		y1 -= '1';
		x2 -= 'A';
		y2 -= '1';
		
		knight(x1, y1, 0);
		
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				printf("%d ", board[i][j]);
			}
			printf("\n");
		}
		printf("Case #%d: ", t);
		printf("%d\n", board[x2][y2]);
	}
}

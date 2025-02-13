#include <stdio.h>

struct Piece{
	int x, y;
};

Piece convert(char pos[]){
	Piece p;
	p.x = pos[0] - 'A';
	p.y = pos[1] - '1';
	return p;
}

void move(int board[10][10], int x, int y, int n){
	if(x < 0 || y < 0 || x >= 8 || y >= 8) return;
	if(board[y][x] > n) return;
	if(n <= 0) return;
	board[y][x] = n;
	move(board, x-1, y+2, n-1);
	move(board, x-2, y+1, n-1);
	
	move(board, x+1, y+2, n-1);
	move(board, x+2, y+1, n-1);
	
	move(board, x-1, y-2, n-1);
	move(board, x-2, y-1, n-1);
	
	move(board, x+1, y-2, n-1);
	move(board, x+2, y-1, n-1);
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	for(int tc = 1; tc<=t; tc++){
		int n;
		char pos[2][5];
		scanf("%d", &n); getchar();
		scanf("%s %s", pos[0], pos[1]); getchar();
		int board[10][10];
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				board[i][j] = 0;
			}
		}
		Piece k1 = convert(pos[0]), k2 = convert(pos[1]);
		move(board, k1.x, k1.y, (n*2)+1);
//		for(int i = 0;i<8; i++){
//			for(int j = 0; j<8; j++){
//				printf("%d ", board[i][j]);
//			}
//			printf("\n");
//		}
		if(board[k2.y][k2.x] >= 1){
			printf("Case #%d: YES\n", tc);
		}
		else printf("Case #%d: NO\n", tc);
	}
	
	return 0;
}

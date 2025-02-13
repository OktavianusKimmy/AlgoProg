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

int move(int board[10][10], int x, int y, int x2, int y2, int n){
	if(x < 0 || y < 0 || x >= 8 || y >= 8) return 0;
	if(board[y][x] > n) return 0;
	if(n <= 0) return 0;
	board[y][x] = n+1;
	if(x == x2 && y == y2) return n;
	int m [10];
	m[1] = move(board, x-1, y+2, x2, y2, n+1);
	m[2] = move(board, x-2, y+1, x2, y2, n+1);
	
	m[3] = move(board, x+1, y+2, x2, y2, n+1);
	m[4] = move(board, x+2, y+1, x2, y2, n+1);
	
	m[5] = move(board, x-1, y-2, x2, y2, n+1);
	m[6] = move(board, x-2, y-1, x2, y2, n+1);
	
	m[7] = move(board, x+1, y-2, x2, y2, n+1);
	m[8] = move(board, x+2, y-1, x2, y2, n+1);
	
	int min = 99;
	for(int i = 1; i<=8; i++){
		if(m[i] < min && m[i] != 0) min = m[i];
	}
	return min;
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	for(int tc = 1; tc<=t; tc++){
		char pos[2][5];
		scanf("%s %s", pos[0], pos[1]); getchar();
		int board[10][10];
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				board[i][j] = 0;
			}
		}
		Piece k1 = convert(pos[0]), k2 = convert(pos[1]);
		int n = 0;
		int min = move(board, k1.x, k1.y, k2.x, k2.y, n);
//		for(int i = 0;i<8; i++){
//			for(int j = 0; j<8; j++){
//				printf("%d ", board[i][j]);
//			}
//			printf("\n");
//		}
		printf("%d\n", min);
	}
	
	return 0;
}

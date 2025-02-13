#include <stdio.h>

char board[105][105];

int count = 0;

void pacmon(int x, int y, int a, int b){
	if(x > a || x < 0 || y > b || y < 0) return;
	if(board[x][y] == '#') return;
	
	if(board[x][y] == '*') count++;
	board[x][y] = '#';
	
	pacmon(x+1, y, a, b);
	pacmon(x-1, y, a, b);
	pacmon(x, y+1, a, b);
	pacmon(x, y-1, a, b);
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	for(int tc = 1; tc<=t; tc++){
		int a, b;
		scanf("%d %d", &a, &b); getchar();
		int x, y;
		for(int i = 0; i<a; i++){
			scanf("%s", board[i]);
		}
		
		for(int i = 0; i<a; i++){
			for(int j = 0; j<b; j++){
				if(board[i][j] == 'P'){
					x = i;
					y = j;
				}
			}
		}
		
		
//		for(int i = 0; i<a; i++){
//			printf("%s\n", board[i]);
//		}
		
		pacmon(x, y, a, b);
		printf("%d\n", count);
		count = 0;
	}
}

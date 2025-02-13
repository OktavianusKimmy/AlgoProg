#include <stdio.h>

char board[100][100];

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			board[i][j] = '.';
		}
	}
	for(int i = 0; i<m; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		board[x][y] = '*';
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(board[i][j] == '*'){
				board[i][j-1] = 	(board[i][j-1] == '.' && board[i][j-1] != '*') ? '1' : board[i][j-1]++;
				board[i-1][j-1] = 	(board[i-1][j-1] == '.' && board[i-1][j-1] != '*') ? '1' : board[i-1][j-1]++;
				board[i-1][j] = 	(board[i-1][j] == '.' && board[i-1][j] != '*') ? '1' : board[i-1][j]++;
				board[i-1][j+1] = 	(board[i-1][j+1] == '.' && board[i-1][j+1] != '*') ? '1' : board[i-1][j+1]++;
				board[i][j+1] = 	(board[i][j+1] == '.' && board[i][j+1] != '*') ? '1' : board[i][j+1]++;
				board[i+1][j+1] = 	(board[i+1][j+1] == '.' && board[i+1][j+1] != '*') ? '1' : board[i+1][j+1]++;
				board[i+1][j] = 	(board[i+1][j] == '.' && board[i+1][j] != '*') ? '1' : board[i+1][j]++;
				board[i+1][j-1] = 	(board[i+1][j-1] == '.' && board[i+1][j-1] != '*') ? '1' : board[i+1][j-1]++;
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}

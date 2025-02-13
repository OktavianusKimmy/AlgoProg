#include <stdio.h>

int count = 0;

void floodfill(int i, int j, int board[100][100], int n){
	if(i >= n || i < 0 || j >= n|| j < 0) return;
	if(board[i][j] == 0) return;
	board[i][j] = 0;	
	count++;
	
	floodfill(i-1, j, board, n);
	floodfill(i+1, j, board, n);
	floodfill(i, j+1, board, n);
	floodfill(i, j-1, board, n);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	
	int n;
	fscanf(file, "%d\n", &n);
	int board[100][100];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			board[i][j] = 0;
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			fscanf(file, "%d ", &board[i][j]);
		}
		fscanf(file, "\n");
	}
	
	int max = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(board[i][j] == 1){
				count = 0;
				floodfill(i, j, board, n);
				if(count > max) max = count;
			}
		}
	}
	
	printf("%d\n", max);
}

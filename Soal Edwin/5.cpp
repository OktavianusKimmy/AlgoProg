#include <stdio.h>

void floodfill(char board[100][100], int i, int j, int x, int y){
	if(i < 0 || i >= x || j < 0 || j >= y) return;
	if(board[i][j] == '#') return;
	
	board[i][j] = '#';
	floodfill(board, i+1, j, x, y);
	floodfill(board, i-1, j, x, y);
	floodfill(board, i, j+1, x, y);
	floodfill(board, i, j-1, x, y);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int x, y, price;
	fscanf(file, "%d %d %d\n", &x, &y, &price);
	char board[100][100];
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++){
			fscanf(file, "%c", &board[i][j]);
		}
		fscanf(file, "\n");
	}
	
	int count = 0;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++){
			if(board[i][j] == '-'){
				floodfill(board, i, j, x, y);
				count++;
			}
		}
	}
	
	printf("%d\n", count*price);
}

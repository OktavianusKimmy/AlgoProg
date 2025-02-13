#include <stdio.h>

char board[15][15];


void floodfill(int x, int y, int n, int count){
	if(x < 0 || x >= n || y < 0 || y >= n) return;
	if(board[x][y] == '#') return;
	if(count + '0'>= board[x][y]) return;
	
//	if(board[x][y] == 'E') board[x][y] = count + '0';
//	else if(board[x][y] == ' ') board[x][y] = count+ '0';
	
	board[x][y] = count + '0';
	
	floodfill(x+1, y, n, count+1);
	floodfill(x-1, y, n, count+1);
	floodfill(x, y+1, n, count+1);
	floodfill(x, y-1, n, count+1);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int x1, y1, x2, y2;
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			fscanf(file, "%c", &board[i][j]);
			if(board[i][j] == 'S'){
				x1 = i;
				y1 = j;
			}
			else if(board[i][j] == 'E'){
				x2 = i;
				y2 = j;
			}
		}
		fscanf(file, "\n");
	}
	
	for(int i = 0 ; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(board[i][j]==' ' || board[i][j]=='E') board[i][j] = '0';
		}
	}
	
	int count = 0;
	floodfill(x1, y1, 10, 0);
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	
	printf("%c\n", board[x2][y2]);
}

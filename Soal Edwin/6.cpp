#include <stdio.h>

char board[100][100];

void floodfill(int x, int y, int n, int m, int before){
	if(board[y][x] > before) return;
	if(y >= n || y < 0 || x >= m || x < 0) return;
	char temp = board[y][x];
	board[y][x] = 'W';
	
	floodfill(x+1, y, n, m, temp);
	floodfill(x-1, y, n, m, temp);
	floodfill(x, y+1, n, m, temp);
	floodfill(x, y-1, n, m, temp);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n, m;
	fscanf(file, "%d %d\n", &n, &m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			fscanf(file, "%c ", &board[i][j]);
		}
		fscanf(file, "\n");
	}
	int x, y;
	fscanf(file, "%d %d\n", &x, &y);
	
	floodfill(x, y, n, m, 100);
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(board[i][j] != 'W') printf(". ");
			else printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	
}

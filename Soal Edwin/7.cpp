#include <stdio.h>

char board[100][100];

struct Warna{
	char warna[10];
	int count;
};

Warna color[5]{
	{"Merah", 0},
	{"Hijau", 0},
	{"Biru", 0}
};

int count = 0;

void floodfill(int i, int j, int n, int m, char temp){
	if(i < 0 || i >= n || j < 0 || j >= m) return;
	if(board[i][j] == '+') return;
	count++;
	board[i][j] = '+';
	floodfill(i+1, j, n, m, temp);
	floodfill(i-1, j, n, m, temp);
	floodfill(i, j+1, n, m, temp);
	floodfill(i, j-1, n, m, temp);
	
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n, m;
	fscanf(file, "%d %d\n", &n, &m);
	for(int i = 0; i<n; i++){
		fscanf(file, "%s\n", board[i]);
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(board[i][j] == 'M' || board[i][j] == 'H' || board[i][j] == 'B'){
				char temp = board[i][j];
				floodfill(i, j, n, m, temp);
				if(temp == 'M') color[0].count += count;
				else if(temp == 'H') color[1].count += count;
				else if(temp == 'B') color[2].count += count;
				count = 0;
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	
	printf("Merah : %d\n", color[0].count);
	printf("Hijau : %d\n", color[1].count);
	printf("Biru : %d\n", color[2].count);
}

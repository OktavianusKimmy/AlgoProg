#include <stdio.h>

int board[10][10];

void horse(int x1, int y1, int count){
	if(x1 >= 8 || x1 < 0 || y1 >= 8 || y1 < 0) return;
	
	if(count >= board[x1][y1]) return;
	
	board[x1][y1] = count;
	
	horse(x1+1, y1+2, count + 1);
	horse(x1+1, y1-2, count + 1);
	
	horse(x1-1, y1+2, count + 1);
	horse(x1-1, y1-2, count + 1);

	horse(x1+2, y1+1, count + 1);
	horse(x1+2, y1-1, count + 1);

	horse(x1-2, y1+1, count + 1);
	horse(x1-2, y1-1, count + 1);
}

int main(){
	int t;
	scanf("%d", &t); getchar();
	for(int tc = 1; tc<=t; tc++){
		
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				board[i][j] = 100;
			}
		}
		
		char x1, y1, x2, y2;
		scanf("%c%c %c%c", &x1, &y1, &x2, &y2); getchar();
		int xAwal = x1 - 'A';
		int yAwal = y1 - '1';
		
		int xTujuan = x2 - 'A';
		int yTujuan = y2 - '1';
		
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				printf("%d|", board[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		horse(xAwal, yAwal, 0);
		
		for(int i = 0; i<8; i++){
			for(int j = 0; j<8; j++){
				printf("%d|", board[i][j]);
			}
			printf("\n");
		}
		
		printf("%d\n", board[xTujuan][yTujuan]);
		
	}
}

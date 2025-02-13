#include <stdio.h>

int board[10][10];

void find(int posX, int posY, int count){
	if(posX < 0 || posX > 7 || posY < 0 || posY > 7) return;
	if(count >= board[posX][posY]) return;
	board[posX][posY] = count;
	
	find(posX-1, posY+2, count+1);
	find(posX-2, posY+1, count+1);
	
	find(posX+1, posY+2, count+1);
	find(posX+2, posY+1, count+1);
	
	find(posX-1, posY-2, count+1);
	find(posX-2, posY-1, count+1);
	
	find(posX+1, posY-2, count+1);
	find(posX+2, posY-1, count+1);
}

int main(){
	int tc;
	scanf("%d", &tc); getchar();
	for(int i = 1; i<=tc; i++){
		for(int a = 0; a<8; a++){
			for(int b = 0; b<8; b++){
				board[a][b] = 100;
			}
		}
		
		char initial, end;
		char a, b;
		scanf("%c%c %c%c", &initial, &a, &end, &b); getchar();
		int posX = initial - 'A';
		int posY = a-'1';
		
		int findX = end - 'A';
		int findY = b-'1';
		find(posX, posY, 0);
		
//		for(int a = 0; a<8; a++){
//			for(int b = 0; b<8; b++){
//				printf("%d|", board[a][b]);
//			}
//			printf("\n");
//		}
		
		printf("Case #%d: %d\n", i, board[findX][findY]);
	}
}

#include <stdio.h>

int luas  = 0;
int board[100][100];

void floodfill(int i, int j, int n){
	if(i < 0 || i >= n || j < 0 || j >= n) return;
	if(board[i][j] == 0)return;
	
	board[i][j] = 0;
	luas++;
	
	floodfill(i+1,j,n);
	floodfill(i-1,j,n);
	floodfill(i,j+1,n);
	floodfill(i,j-1,n);
	
}

int main(){
	FILE *f = fopen("testdata.in","r");
	
	int n;
	fscanf(f, "%d\n",&n);
	int palingluas = 0;
	for(int i = 0; i< n; i++) {
		for(int j = 0; j < n; j++) {
			fscanf(f,"%d ",&board[i][j]);
		}
		fscanf(f,"\n");
	}
	
	for(int i = 0; i< n; i++) {
		for(int j = 0; j < n; j++) {
			floodfill(i,j,n);
			if(luas > palingluas) palingluas = luas;
			luas = 0;
		}
	}
	printf("%d\n",palingluas);
	
}

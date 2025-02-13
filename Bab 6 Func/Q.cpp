#include <stdio.h>

int count = 0;
int papan[8][8] = {0};

bool valid(int startX, int startY){
	if(startX>=0 && startX<8 && startY>=0 && startY<8){
		return true;
	}
	else return false;
}

bool visited(int startX, int startY){
	if(papan[startX][startY] == 0) return true;
	else return false;
}

int cek(int startX, int startY, int finishX, int finishY){
	
	if(startX == finishX && startY == finishY && valid(startX, startY)){
		
		return count;
	}
	
	papan[startX][startY] = 1;
//	count++;
	if(valid(startX+2, startY+1) && visited(startX+2, startY+1)) count += cek(startX+2, startY+1, finishX, finishY);
	if(valid(startX+2, startY-1) && visited(startX+2, startY-1)) count += cek(startX+2, startY-1, finishX, finishY);
	if(valid(startX-2, startY+1) && visited(startX-2, startY+1)) count += cek(startX-2, startY+1, finishX, finishY);
	if(valid(startX-2, startY-1) && visited(startX-2, startY-1)) count += cek(startX-2, startY-1, finishX, finishY);
	if(valid(startX+1, startY+2) && visited(startX+1, startY+2)) count += cek(startX+1, startY+2, finishX, finishY);
	if(valid(startX-1, startY+2) && visited(startX-1, startY+2)) count += cek(startX-1, startY+2, finishX, finishY);
	if(valid(startX+1, startY-2) && visited(startX+1, startY-2)) count += cek(startX+1, startY-2, finishX, finishY);
	if(valid(startX-1, startY+2) && visited(startX-1, startY+2)) count += cek(startX-1, startY+2, finishX, finishY);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char awal[5], akhir[5];
		scanf("%s %s", awal, akhir);
		getchar();
		
		int startX, startY, finishX, finishY;
		
		// A7 E7
		
		startX = awal[0] - 'A';
		finishX = awal[1] - '1';
		startY = akhir[0] - 'A';
		finishY = akhir[1] - '1';
		
		int sum = cek(startX, startY, finishX, finishY);
		printf("Case #%d: %d\n", i, sum);
		count = 0;
	}
}

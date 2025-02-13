#include <stdio.h>

char arr[11][11];

int countArr[100];
int a = 0;
int max = 100;
int flag = 0;
void map(int x1, int y1, int x2, int y2, int count){
	if (flag) return;
	if(x1 >= 10 || x1 < 0 || y1 >= 10 || y1 < 0) return;
	if(arr[x1][y1] == '#' || arr[x1][y1] == 'X') return;
	if(x1 == x2 && y1 == y2){
//		countArr[a] = count;
//		a++;
		if (count < max) max = count;
		flag = 1;
		return;
	}
	
	arr[x1][y1] = 'X';
	
	map(x1+1, y1, x2, y2, count + 1);
	map(x1-1, y1, x2, y2, count + 1);
	map(x1, y1+1, x2, y2, count + 1);
	map(x1, y1-1, x2, y2, count + 1);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
//	map ppti[11];
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			fscanf(file, "%c", &arr[i][j]);
		}
		fscanf(file, "\n");
	}
	
	
	int x1, y1, x2, y2;
	int flag = 0;
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(arr[i][j] == 'S'){
				x1 = i;
				y1 = j;
			} else if(arr[i][j] == 'E'){
				x2 = i;
				y2 = j;
			}
		}
	}
	
	for(int i = 0; i<100; i++){
		countArr[i] = 999;
	}
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	
	map(x1, y1, x2, y2, 0);
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	
	int min = 999;
	for(int i = 0; i<0; i++){
		if(countArr[i] < min){
			min = countArr[i];
		}
		printf("%d\n", countArr[i]);
	}
	printf("%d\n", max);
	
}

#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int kotak;
		scanf("%d", &kotak);
		int tak = kotak+1;
		int nilai[kotak][kotak];
		for(int a = 0; a<kotak; a++){
			for(int b = 0; b<kotak; b++){
				scanf("%d", &nilai[a][b]);
			}
		}
//		printf("%d\n", nilai[2][1]); //8
		int count[kotak];
		int y = 0;
		for(int x = 0; x<kotak; x++){
			if(y == 0)
			
			y++;
		}
		printf("%d\n", count);
	}
	return 0;
}

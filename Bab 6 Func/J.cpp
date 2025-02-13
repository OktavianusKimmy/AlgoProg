#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n = 0;
		char turn = 'l';
		scanf("%d", &n);
		while(n >= 1){
			if(n == 1) break;
			if(turn == 'j') turn = 'l';
			else turn = 'j';
			
			if(n%2 != 0){
				n = (n*3) + 1;
			}
			else n/2;
		}
		printf("Case #%d: ", i);
		if(turn == 'j') printf("Jojo\n");
		else printf("Lili\n");
	}
}

#include <stdio.h>

int main(){
	int t, finish, total = 0;
	int lompatan = 0, finalLom = lompatan + 1;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%d", &finish);
		int a = 0;
		while(a < finish){
			lompatan += 1;
			a++;
			total += a;
			if(finalLom >= finish){
				break;
			}
			else{
				continue;
			}
		}
		printf("%d\n", finalLom);
		
		
	}
}

// 1 3 7 15

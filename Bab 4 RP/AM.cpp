#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int z;
		scanf("%d", &z);
		printf("Case #%d:\n", i);
		for(int a = 1; a<=z; a++){
			if(a%3 == 0 || a%5 == 0){
				if(a%15 == 0){
					printf("%d Lili\n", a);
				}
				else{
					printf("%d Jojo\n", a);
				}
			}
			else{
				printf("%d Lili\n", a);
			}
		}
	}
	return 0;
}

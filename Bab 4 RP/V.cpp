#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		scanf("%d", &n);
		for(int a = 1; a<=n; a++){
			for(int b = 1; b<=n; b++){
				if(a == 1 || a == n || b == 1 || b == n){
					printf("*");
				}
				else if(b != 1 && b != n){
					if(b == a || b-1 == n - a){
						if(a == (n/2)+1){
							printf("*");
						}
						else{
							printf("*");
						}
					}
					else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}

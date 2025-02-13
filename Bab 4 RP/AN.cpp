#include <stdio.h>

int main(){
	char a[7]={'a', 's', 'h', 'i', 'a', 'p'};
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int b[7];
		for(int z = 0; z<=5; z++){
			scanf("%d", &b[z]);
		}
		printf("Case #%d: ", i);
		for(int j=0; j<=5; j++){
			int k = 1;
			while(k<=b[j]){
				printf("%c", a[j]);
				k++;
			}
			k = 1;
		}
		printf("\n");
	}
	return 0;
}

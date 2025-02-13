#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int num;
		scanf("%d", &num);
		int x[num+5];
		for(int j = 0; j<num; j++){
			scanf("%d", &x[j]);
			getchar();
		}
		printf("Case #%d: ", i);
		for(int k = num-1; k>=0; k--){
			if(k == 0){
				printf("%d", x[k]);
			}
			else{
				printf("%d ", x[k]);
			}
		}
		printf("\n");
	}
	return 0;
}

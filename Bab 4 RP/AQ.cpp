#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char x[101];
		scanf("%s", x);
		int l = strlen(x);
		int count = 0;
		for(int a = 0; a<l; a++){
			if(x[a] >= '0' && x[a] <= '9'){
				count++;
			}
		}
		printf("Case #%d: ", i);
		if(count != 6){
			printf("NO\n");
			break;
		}
		else{
			for(int b = 1; b<l-2; b+=2){
				if(x[b] != '.'){
					printf("NO\n");
					break;
				}
				else{
					printf("YES\n");
					break;
				}
			}
			
		}
//		printf("%d\n", count);
	}
	
	
	return 0;
}

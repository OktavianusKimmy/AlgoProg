#include <stdio.h>
#include <string.h>

char n[100005];

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%s", &n);
		int num = 0;
		int l = strlen(n);
		for(int i = 0; i<l; i++){
			num += n[i] - '0';
			num %= 11;
			num *= 10;
		}
		if(num == 0){
			printf("Case #%d: Yeah\n", i);
		}
		else{
			printf("Case #%d: Nah\n", i);
		}
	}
}

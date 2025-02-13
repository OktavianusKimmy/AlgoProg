#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int num;
		scanf("%d", &num);
		int x[num+5];
		for(int a = 0; a<num; a++){
			x[a] = 0;
		}
		
		for(int a = 0; a<num; a++){
			scanf("%d", &x[a]);
		}
		int count = 0;
		int b=0;
		while(b<num){
			if(x[b] == x[b+1]){
				count++;
				b+=2;
			}
			else{
				b++;
			}
		}
		printf("Case #%d: %d\n", i, count);
		
	}
}

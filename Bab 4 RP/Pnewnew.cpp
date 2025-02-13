#include<stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int finish = 0;
		int start = 0;
		int count = 0;
		int a = 0;
		scanf("%d", &finish);
		while(start <= finish){
			if(start == 0){
				start++;
				count++;
			}
			else{
				a = start - a;
				start += a;
				count++;
				if(start >= finish){
					printf("%d\n", start);
					break;
				}
				a = start;
			}
		}
	}
}

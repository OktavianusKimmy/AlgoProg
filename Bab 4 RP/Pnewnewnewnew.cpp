#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int finish;
		scanf("%d", &finish);
		if(finish==0){
			int count=0;
			printf("Case #%d: %d\n", t, count);
		}
		else{
		int total=0, count=0, i=0;
		while(total < finish){
			total+=i;
			count++;
			i++;
		}	
		printf("Case #%d: %d\n", t, count-1);
		}
	}
}

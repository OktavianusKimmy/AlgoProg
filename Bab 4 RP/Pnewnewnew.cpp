#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int a = 0;
		int tampungA[105];
		tampungA[0] = 0;
		tampungA[1] = 1;
		tampungA[3] = 2;
		for(int x = 3; x<100; x++){
			tampungA[x] = tampungA[x-1] + 2;
		}
		int finish;
		scanf("%d", &finish);
		int count = 0;
		int x = 0;
		if(finish > 0){
			while(tampungA[x] < finish){
				count++;
				x++;
			}
			printf("%d\n", count);
		}
		else{
			printf("0\n");
		}
	}
}

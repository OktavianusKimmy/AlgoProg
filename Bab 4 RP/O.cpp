#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int porsi, max, mula;
		scanf("%d %d %d", &porsi, &max, &mula);
		int menu[porsi+2] = {0};
		for(int i = 0; i<porsi; i++){
			scanf("%d", &menu[i]);
		}
		// 8 9 2
		// 1 2 3 4 5
		// 5 4 3 2 1
		int temp = 0;
		for(int i = 0; i<porsi; i++){
			for(int a = i+1; a<porsi; a++){
				if(menu[a] > menu[i]){
					if(menu[a]>temp){
						temp=menu[a];
					}
				}
				else if (menu[a] <= menu[i]){
					if(menu[i]>temp){
						temp=menu[i];
					}
				}
			}
		}
		printf("Case #%d: ", t);
		if(temp > mula){
			printf("%d\n", temp);
		}
		else{
			printf("%d\n", mula);
		}
		
	}
}

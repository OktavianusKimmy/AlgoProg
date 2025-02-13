#include <stdio.h>

int main(){
	int jmlSnjBibi, jmlSnjDrg;
	int bibi, dragon;
	int maxBibi = 0;
	int maxDragon = 0;
	scanf("%d %d", &jmlSnjBibi, &jmlSnjDrg);
	for(int a = 1; a<=jmlSnjBibi; a++){
		scanf("%d", &bibi);
		if(maxBibi < bibi){
			maxBibi = bibi;
		}
	}
	for(int b = 1; b<=jmlSnjDrg; b++){
		scanf("%d", &dragon);
		if(maxDragon < dragon){
			maxDragon = dragon;
		}
	}
	
	if(maxBibi > maxDragon){
		printf("The dark secret was true\n");
	}
	else{
		puts("Secret debunked");
	}
	return 0;
}

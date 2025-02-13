#include <stdio.h>

int main(){
	int jmlBalon, powerBibi, balon, pecahin=0;
	scanf("%d %d", &jmlBalon, &powerBibi);
	for(int a = 1; a <= jmlBalon; a++){
		scanf("%d", &balon);
		if(balon < powerBibi){
			pecahin++;
		}
		else{
			continue;
		}
	}
	printf("%d\n", pecahin);
	return 0;
}

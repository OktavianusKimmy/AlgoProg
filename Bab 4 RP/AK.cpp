#include <stdio.h>

int main(){
	int tangga, teriak[101];
	scanf("%d", &tangga);
	for(int i = 0; i<tangga; i++){
		scanf("%d", &teriak[i]);
	}
	teriak[tangga] = 1;
	for(int a = 0; a<tangga; a++){
		if(teriak[a] >= teriak[a+1]){
			printf("%d", teriak[a]);
			if(a != tangga-1){
				printf(" ");
			}
		}
	}
	printf("\n");
	return 0;
}

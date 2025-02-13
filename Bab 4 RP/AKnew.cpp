#include <stdio.h>

int main(){
	int tangga, teriak[101];
	scanf("%d", &tangga);
	for(int i = 0; i<tangga; i++){
		scanf("%d", &teriak[i]);
		int temp = 1;
		if(i != 0){
			if(teriak[i] == temp){
				printf("%d ", teriak[i-1]);
			}
		}
		if(i == tangga-1){
			printf("%d", teriak[i]);
		}
	}
	printf("\n");
	return 0;
}

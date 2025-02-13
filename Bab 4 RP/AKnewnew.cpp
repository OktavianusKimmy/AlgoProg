#include <stdio.h>

int main(){
	int tangga, teriak[101];
	scanf("%d", &tangga);
	for(int i = 0; i<tangga; i++){
		scanf("%d", &teriak[i]);
		if(i == tangga-1){
			printf("%d\n", teriak[i]);
		}
		if(teriak[i] == 1 && i != 0){
			printf("%d ", teriak[i-1]);
		}
	}
	return 0;
}

#include <stdio.h>

int main(){
	int tangga, teriak;
	int temp = 0;
	scanf("%d", &tangga);
	for(int i = 1; i<=tangga; i++){
		scanf("%d", &teriak);
		if(temp < teriak){
			temp = teriak;
		}
		else if(temp >= teriak){
			printf("%d ", temp);
			temp = teriak;
		}
		if(i == tangga){
			printf("%d\n", temp);
		}
	}
	return 0;
}

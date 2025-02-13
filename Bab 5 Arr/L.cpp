#include <stdio.h>

int main(){
	int l;
	scanf("%d", &l);
	int penampung1[l+2];
	int penampung2[l+2];
	int arrBibi[l+2];
	
	for(int i = 0; i<l; i++){
		scanf("%d", &penampung1[i]);
	}
	for(int i = 0; i<l; i++){
		scanf("%d", &penampung2[i]);
	}
	
	for(int a = 0; a<l; a++){
		arrBibi[penampung1[a]] = penampung2[a];
	}
	
	for(int b = 0; b<l; b++){
		if(b == l-1){
			printf("%d", arrBibi[b]);
		}
		else{
			printf("%d ", arrBibi[b]);
		}
	}
	printf("\n");
	return 0;
}



/*
0 4 3 1 2
1 2 3 4 5

1 4 5 3 2


penampung1 [0] [4] [3] [1] [2]
penampung2 [1] [2] [3] [4] [5]

arrayBIBI

*/

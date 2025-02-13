#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		int jmlArray, angka[101], count;
		scanf("%d", &jmlArray);
		for(int a = 0; a<jmlArray; a++){
			scanf("%d", &angka[a]);
			if(angka[a]<angka[a-1]){
				angka[a-1] = angka[a];
			}
		}
		for(int b = 0; b<jmlArray; b++){
			printf("%d ", angka[b]);
		}
		
	}
	return 0;
}

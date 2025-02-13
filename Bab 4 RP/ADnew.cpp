#include <stdio.h>

int main(){
	int jumlah;
	scanf("%d", &jumlah);
	
	int prize[jumlah+5];
	int count = 1;
	for(int i = 0; i<jumlah; i++){
		scanf("%d", &prize[i]);
		if(i != 0){
			for(int a = i; a>0; a--){
				if(prize[a] == prize[a-1]){
					count += 1;
				}
			}
		}
	}
	printf("%d\n", count);
}

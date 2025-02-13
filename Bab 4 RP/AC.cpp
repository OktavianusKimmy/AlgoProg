#include <stdio.h>

int main(){
	int t, jenis, uang, harga1=0, harga2=0, palingMurah=0, count=0;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d %d", &jenis, &uang);

		for(int a=1; a<=jenis; a++){
			scanf("%d", &harga1);
			if(count<=harga1){
				count=harga1;
			}
			else{
				continue;
			}
		
		}
		printf("%d", uang/count);
	}
	return 0;
}

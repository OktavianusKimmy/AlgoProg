#include <stdio.h>

int main(){
	int t, jenis, duit, harga[1000001];
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%d %d", &jenis, &duit);
		for(int a = 0; a<jenis; a++){
			scanf("%d", &harga[a]);
			if(harga[0] > harga[a]){
				harga[0] = harga[a];
			}
			else{
				continue;
			}
		}
		printf("Case #%d: %d\n", i, (duit/harga[0]));
	}
	return 0;
}

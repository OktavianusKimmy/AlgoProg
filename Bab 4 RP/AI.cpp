#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	int angka;
	for(int i = 1; i<=tc; i++){
		scanf("%d", &angka);
		int isi[angka+5];
		for(int a = 0; a<angka; a++){
			scanf("%d", &isi[a]);
		}
		int count = 0;
		if(angka > 2){
			for(int b = 1; b<angka; b++){
				if((isi[b] + isi[b-1]) == (isi[b-1] + isi[b-2])){
				count += 1;
				}
			}
		}
		else{
			if(isi[0] == isi[1]){
				count += 1;
			}
		}
		
		if(count == 0){
			printf("Case #%d: No\n", i);
		}
		else{
			printf("Case #%d: Yes\n", i);
		}
	}
}

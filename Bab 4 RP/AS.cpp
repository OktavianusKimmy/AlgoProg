#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		int soal;
		scanf("%d", &soal);
		getchar();
		char bibi[soal+5];
		char kunjaw[soal+5];
		
		scanf("%s", bibi);
		getchar();
		
		scanf("%s", kunjaw);
		getchar();
		
		
		int count = 0;
		for(int c = 0; bibi[c] != '\0'; c++){
			if(bibi[c] == kunjaw[c]){
				count = count + 1;
			}
		}
		
		int nilai = (count*100)/soal;
		
		printf("Case #%d: %d\n", i, nilai);
	}
}

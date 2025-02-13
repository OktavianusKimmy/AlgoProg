#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int data;
		scanf("%d", &data);
		int value[205];
		int indeks[205] = {0};
		for(int a = 0; a<data; a++){
			scanf("%d", &value[a]);
			indeks[value[a]] = 1;
		}
		
		int count = 0;
		
		int angka[205] = {0};
		
		int temp = 0;
		
		for(int a = 0; a<207; a++){
			for(int b = temp; b<207; b++){
				if(indeks[b] == 1){
					angka[a] = indeks[b];
					temp = b;
					break;
				}
			}
		}
		
		for(int a = 0; a<207; a++){
			if(angka[a] > 0){
				printf("%d\n", angka[a]);
			}
		}
		
		
//		for(int a = 0; a<206; a++){
//			for(int b = 0; b<data; b++){
//				for(int c = b+1; c<data-1; c++){
//					if(value[c] == '\0'){
//						break;
//					}
//					if(indeks[a] == (value[b] + value[c])){
//						count++;
//					}
//				}
//			}
//		}
		
		printf("%d\n", count);
	}
}

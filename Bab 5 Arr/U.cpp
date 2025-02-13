#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int num;
		scanf("%d", &num);
		int angka[num+5];
		for(int a = 0; a<num; a++){
			scanf("%d", &angka[a]);
		}
		
		int bibi, lili;
		scanf("%d %d", &bibi, &lili);
		
		
		int angkaBibi, angkaLili;
		angkaBibi = angka[bibi-1];
		angkaLili = angka[lili-1];
		
		printf("Case #%d : ", i);
		if(angkaBibi > angkaLili){
			puts("Bibi");
		}
		else if(angkaLili > angkaBibi){
			puts("Lili");
		}
		else if(angkaLili == angkaBibi){
			puts("Draw");
		}
	}
	return 0;
}

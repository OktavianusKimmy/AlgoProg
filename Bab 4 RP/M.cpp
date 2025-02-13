#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jenisMakanan, uang, hargaMasing, total = 0;
		scanf("%d %d", &jenisMakanan, &uang);
		for(int i = 1; i<=jenisMakanan; i++){
			scanf("%d", &hargaMasing);
			total += hargaMasing;
		}
		if(total > uang){
			printf("Case #%d: Wash dishes\n", i);
		}
		else if(total <= uang){
			printf("Case #%d: No worries\n", i);
		}
		total = 0;
	}
	return 0;
}

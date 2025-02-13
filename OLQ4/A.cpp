#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int angka;
		scanf("%lld", &angka);
		if(angka%11 == 0){
			printf("Case #%d: Yeah\n", i);
		}
		else{
			printf("Case #%d: Nah\n", i);
		}
	}
	return 0;
}

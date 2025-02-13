#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		int sum = 0;
		int place = 1;
		while((a > 0) || (b > 0)){
			int hasil = (a%10 + b%10)%10;
			sum += hasil * place;
			place*=10;
			a /= 10;
			b /= 10;
		}
		// 999 110
		//
		printf("Case #%d: %d\n", i, sum);
	}
}

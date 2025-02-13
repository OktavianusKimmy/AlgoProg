#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int n;
		scanf("%d", &n);
		n = n-2;
		long long int a, b, c;
		a = 0;
		b = 1;
		c = 0;
		for(int j = 1; j<=n; j++){
				c = a+b;
				a = b;
				b = c;
//			printf("%d\n", c);
		}
		if(n == 0){
			printf("Case #%d: 1\n", i);
		}
		else{
			printf("Case #%d: %lld\n", i, c);
		}
		
	}
}

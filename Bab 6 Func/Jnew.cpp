#include <stdio.h>

long long int count = 0;

long long int cek(long long int n){
	count++;
	if(n == 1){
		return count;
	}
	if(n % 2 == 0) return cek(n/2);
	else return cek((n*3)+1);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		long long int n;
		scanf("%lld", &n);
		printf("Case #%d: ", i);
		if(cek(n) % 2 == 0){
			printf("Jojo\n");
		}
		else printf("Lili\n");
		count = 0;
	}
}

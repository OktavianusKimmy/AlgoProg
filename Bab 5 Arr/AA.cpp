#include <stdio.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	long long int room[n+5]={0};
	for(int i = 1; i<=n; i++){
		scanf("%lld", &room[i]);
	}
	long long int count = 0;
	for(int i = 1; i<=n; i++){
		for(int a = i+1; a<=n; a++){
			if(room[i] == room[a]){
				count++;
				break;
			}
		}
	}
	long long int total = n - count;
	if(total < 0){
		total *= -1;
	}
	printf("%lld\n", total);
}

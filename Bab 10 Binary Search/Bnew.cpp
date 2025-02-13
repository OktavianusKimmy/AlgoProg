#include <stdio.h>
#define ull unsigned long long

ull search(ull m){
	ull res = -1;
	ull high = 1500000;
	ull low = 0;
	
	while(low <= high){
		ull mid = low + (high - low) / 2;
		ull form = (mid * (mid + 1) * (2*mid + 1)) / 6;
		if(form >= m){
			high = mid - 1;
			res = mid;
		}
		else{
			low = mid + 1;
		}
	}
	return res;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		ull m;
		scanf("%llu", &m);
		ull result = search(m);
		printf("Case #%d: %llu\n", i+1, result);
	}
	
}

#include <stdio.h>
#define ll long long

ll recursiveBinary(ll angka[], ll low, ll high, ll target){
	if(low <= high){
		ll mid = low+(high - low)/2;
		
		if(angka[mid] == target) return mid;
		
		if(target < angka[mid]) return recursiveBinary(angka, low, mid-1, target);
		else return recursiveBinary(angka, mid+1, high, target);
	}
	return -2; 
}

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	ll angka[10001] = {0};
	for(ll i = 0; i<n; i++){
		scanf("%lld", &angka[i]);
	}
	ll target;
	for(ll i = 0; i<m; i++){
		scanf("%lld", &target);
		printf("%lld\n", recursiveBinary(angka, 0, n-1, target) + 1);
	}
	return 0;
}

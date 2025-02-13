#include <stdio.h>

int main(){
	long long int n;
	scanf("%lld", &n);
	long long int orang[105][105] = {0};
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			scanf("%lld", &orang[i][j]);
		}
	}
	long long int penentu[n+2] = {0};
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
//			penentu[i] += (orang[i][j] > 0) ? 1 : 0;
			penentu[orang[i][j]] += (orang[i][j] > 0) ? 1 : 0;
//			penentu[orang[i][j]]++;
		}
	}
	long long int kurang = 0;
	for(int i = 1; i<=n; i++){
		if(penentu[i] < n){
			kurang++;
		}
	}
	printf("%lld\n", kurang);
}

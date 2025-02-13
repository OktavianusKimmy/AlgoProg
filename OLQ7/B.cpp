#include <stdio.h>

int cek(int x, int y, int n){
	if (n == 0) {
        return x;
    }
    else if(n == 1) return y;
    else{
    	return cek(x, y, n-1) - cek(x, y, n-2);
	}
}

int main(){	
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int x, y, n;
		scanf("%d %d %d", &n, &x, &y);
		int sum = 0;
		sum = cek(x, y, n);
		printf("Case #%d: %d\n", i, sum);
	}
	
	
	return 0;
}

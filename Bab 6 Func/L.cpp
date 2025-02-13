#include <stdio.h>

int sum[50];

int fibonacci(int a, int x, int y) {
	if (a == 0) {
        return x;
    }
    else if(a == 1) return y;
    
    return fibonacci(a-1, x, y) - fibonacci(a-2, x, y);
}

int main() {
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
	    int a, x, y;
	    scanf("%d %d %d", &a, &x, &y);
	    getchar();
	    
	    sum[0] = x;
	    sum[1] = y;
	    printf("Case #%d: %d\n", i, fibonacci(a, x, y));
	}
    return 0;
}

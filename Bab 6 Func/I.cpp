#include <stdio.h>

int count = 0;

int fibonacci(int n) {
	count++;
	if (n == 0 || n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
	    int n;
	    scanf("%d", &n);
	    getchar();
	    fibonacci(n);
	    printf("Case #%d: %d\n", i, count);
	    count = 0;
	}
    return 0;
}

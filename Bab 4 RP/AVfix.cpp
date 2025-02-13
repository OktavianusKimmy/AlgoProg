#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	for(int j = 0; j<=n; j++){
		for(int l = 0; l<=n; l++){
			int b;
			b = n - j - l;
			if(b>=0){
				count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}

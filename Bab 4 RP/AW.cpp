#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i<t; i++){
		int min = 0;
		int count = 0;
		int n, a;
		scanf("%d", &n);
		for(int z = 0; z<n; z++){
			scanf("%d", &a);
			if(a > min){
				min = a;
				count = 1;
			}
			else if(a == min){
				count++;
			}
		}
		printf("Case #%d: %d\n", i+1, count);
	}
	return 0;
}

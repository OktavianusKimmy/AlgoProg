#include <stdio.h>
#include <stdlib.h>

int a[1000005];

int main(){
	int t, n, m;
	scanf("%d", &t);
	for(int tc = 1; tc<=t; tc++){
		for(int i = 0; i<=1000000; i++){
			a[i] = 0;
		}
		scanf("%d", &n);
		for(int i = 0; i<n; i++){
			scanf("%d", &m);
			a[m]++;
		}
		
		long long int count = 0;
		for(int i = 0; i<1000000; i++){
			if(a[i] > 0){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

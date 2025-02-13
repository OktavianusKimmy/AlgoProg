#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int angka[1005];
	for(int a = 0; a<=1000; a++){
		angka[a] = 0;
	}
	int x;
	for(int a = 0; a<n; a++){
		scanf("%d", &x);
		angka[x]++;
	}
	
	int max = 0;
	for(int a = 1; a<=1000; a++){
		if(max < angka[a]){
			max = angka[a];
		}
	}
	printf("%d\n", max);
	
}

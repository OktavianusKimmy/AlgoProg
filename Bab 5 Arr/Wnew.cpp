#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n;
		scanf("%d", &n);
		int angka[205];
		for(int i = 0; i<n; i++){
			scanf("%d", &angka[i]);
		}
		
		int count[205] = {0};
		for(int a = 0; a<n; a++){
			for(int i = 0; i<n; i++){
				if(a == i) continue;
				for(int j = 0; j<n; j++){
					if(a == j || i == j) continue;
					else if(angka[a] == angka[i] + angka[j]){
						count[a] = 1;
					}
				}
			}
		}
		
		int sum = 0;
		for(int i = 0; i<205; i++){
			sum += count[i];
		}
		
		printf("Case #%d: %d\n", t, sum);
		
		
	}
}

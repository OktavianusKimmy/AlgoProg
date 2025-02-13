#include <stdio.h>

int count(){
	int a;
	scanf("%d", &a);
	return a;
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlPohon;
		scanf("%d", &jmlPohon);
		int sum = 0;
		for(int j = 1; j<=jmlPohon; j++){
			sum += count();
		}
		printf("Case #%d: %d\n", i, sum);
	}
}

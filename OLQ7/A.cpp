#include <stdio.h>

void tree(int cp, int tinggi, int n, int sum){
	int i = 0;
	sum += n;
	int branch = 0;
	if(cp <= tinggi || i < n){
		branch = 1;
		tree(cp+1, tinggi, n-1, sum);
		i++
	}
	if(branch == 0) printf("%d\n", sum);
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int tinggi, n;
		int cp = 0;
		scanf("%d %d", &tinggi, &n);
		int sum = 0;
		tree(cp, tinggi, n, sum);
		
	}
}

#include <stdio.h>

int sum = 0;

void tree(int tinggi, int n, int posisi){
	sum += n;
	int branch = 0;
	if(posisi <= n){
		if(tinggi - 1 >= 0){
			branch = 1;
			tree(tinggi-1, n-1, posisi+1);
		}
		tree(tinggi, n, posisi+1);
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
		sum = 0;
		int posisi = 1;
		tree(tinggi, n, posisi);
	}
}

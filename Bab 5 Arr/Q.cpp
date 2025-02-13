#include <stdio.h>

int main(){
	int fren;
	scanf("%d", &fren);
	for(int i = 1; i<=fren; i++){
		int n, m, q;
		scanf("%d %d %d", &n, &m, &q);
		int perlakuan[100][100];
		for(int a = 0; a<n; a++){
			for(int b = 0; b<m; b++){
				scanf("%d", &perlakuan[a][b]);
			}
		}
		
		int room[100] = {0};
		
		// scan kunjungan
		int teman;
		for(int a = 1; a<=q; a++){
			scanf("%d", &teman);
			getchar();
			teman -= 1;
			for(int b = 0; b<m; b++){
				room[b] += perlakuan[teman][b];
			}
			
		}
		printf("Case #%d:\n", i);
		for(int b = 0; b<m; b++){
			if(room[b] % 2 == 0){
				puts("NO");
			}
			else{
				puts("YES");
			}
		}
	}
	return 0;
}

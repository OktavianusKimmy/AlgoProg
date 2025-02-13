#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int count, tukar;
		scanf("%d %d", &count, &tukar);
		int tambahan;
		int cangkirAwal = count;
		while(count >= tukar){
			tambahan += count / tukar;
			count = count - tambahan;
		}
		printf("%d\n", cangkirAwal+tambahan);
	}
	
}

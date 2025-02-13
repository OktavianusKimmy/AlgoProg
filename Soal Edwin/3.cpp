#include <stdio.h>

struct Ukuran{
	char min[5];
	char max[5];
};

int main(){
	int n;
	scanf("%d", &n);
	Ukuran ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s %s", ppti[i].min, ppti[i].max);
	}
}

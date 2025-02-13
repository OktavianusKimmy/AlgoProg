#include <stdio.h>
#include <string.h>

void balik(char kalimat[1005]){
	int l = strlen(kalimat);
	for(int i = l-1; i>=0; i--){
		printf("%c", kalimat[i]);
	}
	printf("\n");
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		char kalimat[1005];
		scanf("%[^\n]", kalimat);
		getchar();
		printf("Case #%d: ", i);
		balik(kalimat);
	}
	return 0;
}

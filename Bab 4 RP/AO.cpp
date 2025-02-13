#include <stdio.h>

int main(){
	int tc;
	int length;
	char kalimat[101];
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		scanf("%d", &length);
		getchar();
		scanf("%[^\n]", kalimat);
		getchar();
		printf("Case #%d: ", i);
		for(int a = 0; a<=length; a++){
			if(kalimat[a]>='a' && kalimat[a]<='z'){
				printf("%c", kalimat[a]);
			}
		}
		printf("\n");
	}
	return 0;
}

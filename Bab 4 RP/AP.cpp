#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jmlHuruf;
		int subs;
		scanf("%d %d", &jmlHuruf, &subs);
		getchar();
		char huruf[jmlHuruf+5];
		int hurufBaru=0;	
		scanf("%s", huruf);
		getchar();
		int l = strlen(huruf);
		printf("Case #%d: ", i);
		for(int j = 0; j<l; j++){
		hurufBaru = huruf[j] - 'a' + subs;
				if(hurufBaru > 25){
					hurufBaru %= 26;
					printf("%c", hurufBaru+'a');
				}
				else{
					printf("%c", huruf[j] + subs);
				}
				
			}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char kalimat[100002];
		scanf("%s", kalimat);
		int l = strlen(kalimat);
		int count = 0;
		for(int a = 1; a<l-1; a++){
			if(kalimat[a] == kalimat[a-1]){
				count += 1;
			}
		}
		if(count % 2 == 0){
			printf("Case #%d: Yay\n", i);
		}
		else{
			printf("Case #%d: Ewwww\n", i);
		}
	}
}

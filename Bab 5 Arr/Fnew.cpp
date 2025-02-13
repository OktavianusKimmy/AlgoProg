#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char kalimat[100005];
		scanf("%s", kalimat);
		int l = strlen(kalimat);
		int count = 0;
		for(int a = 0; a<l; a++){
			for(int b = a+1; b<l; b++){
				if(kalimat[a] == kalimat[b]){
					count++;
					break;
				}
			}
		}
		printf("Case #%d: ", i);
		if((l-count)%2 == 0){
			printf("Yay\n");
		}
		else{
			printf("Ewwww\n");
		}
	}
}

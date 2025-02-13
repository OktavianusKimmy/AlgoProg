#include <stdio.h>
#include <string.h>

int pal(char kalimat[1005]){
	int l = strlen(kalimat);
	int flag = 1;
	for(int a = 0, b = l-1; a<=b; a++, b--){
		if(kalimat[a] != kalimat[b]){
			flag = 0;
		}
	}
	return flag;
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		char kalimat[1005];
		scanf("%[^\n]", kalimat);
		getchar();
		int boolen = pal(kalimat);
		if(boolen == 0){
			printf("Case #%d: no\n", i);
		}
		else{
			printf("Case #%d: yes\n", i);
		}
	}
}

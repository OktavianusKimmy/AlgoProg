#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		char s[105]={0};

		scanf("%s", s);
		getchar();
		int l = strlen(s);
		int flag = 0;
		int count = 0;
		for(int a = 0; a<l; a++){
			if(s[a] == '.'){
				count++;
				if(a+1 < l && s[a+1] == '.'){
					flag = 1;
					break;
				}
			}
		}
		
		if(s[0] == '.' || s[l-1] == '.'){
			flag = 1;
		}
		
		if(flag == 0 && count == 5){
			printf("Case #%d: YES\n", i);
		}
		else{
			printf("Case #%d: NO\n", i);
		}
	}
	return 0;
}

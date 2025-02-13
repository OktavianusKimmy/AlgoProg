#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int jar, div;
		scanf("%d %d", &jar, &div);
		int minum = jar;
		int count = 0;
		int token = 1;
		while(jar >= div){
			count = jar/div;
			minum += count;
			jar = count + (jar%div);
		}
		printf("Case #%d: %d\n", i, minum);
	}
}

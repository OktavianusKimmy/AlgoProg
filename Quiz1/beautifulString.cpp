#include <stdio.h>
#include <string.h>

int main(){
	char binary[105];
	scanf("%s", binary);
	int l = strlen(binary);
	int count = 0;
	// 0101010
	for(int i = 0; i<l-2; i++){
		if(binary[i] == '0' && binary[i+1] == '1' && binary[i+2] == '0'){
			count++;
//			binary[i+2] = '1';
			i+=2;
		}
	}
	printf("%d\n", count);
	return 0;
}

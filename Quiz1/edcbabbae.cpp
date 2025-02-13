#include <stdio.h>
#include <string.h>

int main(){
	char string[1000];
	scanf("%s", string);
	int l = strlen(string);
	for(int i = 0; i<l; i++){
		if(!(string[i] > 'a' && string[i] < 'z')){
			printf("Inputtan harus a - z cok!!\n");
			return 0;
		}
	}
	// edcba0000
	// 111321111
	int count[l];
	for(int i = 0; i<l; i++){
		count[i] = 1;
	}
	for(int i = 0; i<l; i++){
		for(int a = i+1; a<l; a++){
			if(string[i] == string[a]){
				string[a] = '0';
				count[i]++;
			}
		}
	}
	
	for(int i = 0; i<l; i++){
		if(string[i] != '0'){
			printf("%c %d\n", string[i], count[i]);
		}
	}
	
}

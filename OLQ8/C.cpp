#include <stdio.h>
#include <string.h>
long long sum = 1;
int main(){
	FILE *file = fopen("testdata.in", "r");
	char string[105];
	
	while(!feof(file)){
		fscanf(file, "%s\n", string);
		int len = strlen(string);
//		if(len == 1) sum*=101;
//		else{
			for(int i = 0; i<len; i++){
				if(string[i] == ';'){
					int flag = 0;
					for(int a = 0; a<10; a++){
						if(string[i-1] != '0'+a) flag = 1;
					}
					if(flag == 1) sum*=101;
					
				}
			}
//		}
		
	}
	
	printf("%lld\n", sum%(1000000007));

	fclose(file);
	return 0;
}

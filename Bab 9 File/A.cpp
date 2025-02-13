#include <stdio.h>
#include <string.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int x;
	fscanf(file, "%d\n", &x);
	
	char nama[102][50], random[102][50];
	for(int i = 0; i<x; i++){
		fscanf(file, "%[^#]#%[^\n]\n", nama[i], random[i]);
	}
	
//	for(int i = 0; i<x; i++){
//		printf("%s %s\n", nama[i], random[i]);
//	}
	
	int n;
	fscanf(file, "%d\n", &n);
	char find[102][50];
	for(int i = 0; i<n; i++){
		char temp[50];
		fscanf(file, "%s\n", temp);
		int flag = 0;
		for (int j = 0; j < x; j++) {
			if (strcmp(nama[j], temp) == 0) {
				printf("Case #%d: %s\n", i+1, random[j]);
				flag = 1;
				break;
			}
		}
		if (flag == 0) printf("Case #%d: N/A\n", i+1);
	}
	
	
//	for(int i = 0; i<n; i++){
//		int flag = 0;
//		
//		for(int j = 0; j<x; j++){
//			if(strcmp(find[i], nama[j]) == 0){
//				printf("Case #%d: ", i+1);
//				printf("%s\n", random[j]);
//				flag = 1;
//				break;
//			}
//		}
//		if(flag == 0){
//			printf("Case #%d: ", i+1);
//			printf("N/A\n");
//		}
//	}
	fclose(file);
	
}

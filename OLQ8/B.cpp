#include <stdio.h>

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	char arr[n+2];
	for(int i = 0; i<n; i++){
		fscanf(file, "%s\n", arr);
	}
	
	
	int count[n+2] = {0};
	int a = 0;
	for(int i = 0; i<n; i++){
		if(arr[i] == '1'){
			count[a]++;
		}
		else{
			a++;
		}
		
	}
	
	int max = 0;
	for(int i = 0; i<n; i++){
		if(count[i] > max){
			max = count[i];
		}
	}
	
	
	printf("%d\n", max);
	fclose(file);
	return 0;
}

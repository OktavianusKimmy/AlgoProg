#include <stdio.h>
#include <string.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char arr[a+2][b+2];
	for(int i = 0; i<a; i++){
		scanf("%s", arr[i]);
	}
	
	for(int i = 0; i<a; i++){
		for(int j = 0; j<b; j++){
			for(int k = 0; k<b; k++){
				if(j == k || k < j) continue;
				else if(arr[i][j] > arr[i][k]){
					char temp = arr[i][k];
					arr[i][k] = arr[i][j];
					arr[i][j] = temp;
				}
			}
		}
	}
	
	for(int i = 0; i<a; i++){
		for(int j = 0; j<a; j++){
			if(i == j || i < j) continue;
			else if(strcmp(arr[i], arr[j]) > 0){
				char temp[220];
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}			
		}
	}
	
	for(int i = 0; i<a; i++){
		printf("%s\n", arr[i]);
	}
}

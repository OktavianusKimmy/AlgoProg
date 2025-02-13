#include <stdio.h>
#include <string.h>

void swap(char *stud[], char *stud2[]){
	char temp[50];
	strcpy(temp, *stud);
	strcpy(*stud, *stud2);
	strcpy(*stud2, temp);
}

int main(){
	int n;
	scanf("%d", &n);
	char stud[1005][50];
	for(int i = 0; i<n; i++){
		scanf("%[^\n]", stud[i]);
		getchar();
	}
	
	for(int a = 0; a<n-1; a++){
		for(int i = 6; i<10; i++){
			for(int j = 6; j<10; j++){
				if(stud[a][i] > stud[a+1][j]){
					swap(&stud[a], &stud[a+1]);
				}
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		printf("%s\n", stud[i]);
	}
	
}

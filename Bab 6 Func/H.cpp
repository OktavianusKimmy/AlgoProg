#include <stdio.h>
#include <string.h>

char string[100][100];

void loop(int a){
	strcpy(string[a], strcat(string[a-2], string[a-1]));
}

int main(){
	int tc;
	scanf("%d", &tc);
	getchar();
	for(int i = 1; i<=tc; i++){
		int n;
		
		char s1, s2;
		scanf("%d %c %c", &n, &s1, &s2);
		int a = 2;
		string[0][0] = s2;
		string[1][0] = s1;
		while (a <= n){
			loop(a);
			a++;
		}
		printf("%s\n", string[a-1]);
	}
}

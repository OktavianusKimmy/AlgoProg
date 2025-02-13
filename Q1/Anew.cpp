#include <stdio.h>
#include <string.h>

int main(){
	char x[1005];
	scanf("%s", x);
	int l = strlen(x);
	
	int countTot = 0;
	int countUnique = 0;
	int notPolindrome = 0;
	for(int a = 0, i = l-1; a<l, i>=0; a++, i--){
		if(x[a] == x[i]){
			countTot++;
			countUnique++;
		}
		else{
			if(countTot > 0){
				countTot = l - countTot;
			}
			notPolindrome = 1;
			break;
		}
		if(a>=i){
			countTot++;
			break;
		}
	}
	
	int isSmallPolindrome = 0;
	for(int i = 0; i<l-2; i++){
		if(x[i] == x[i+2]){
			isSmallPolindrome = 1;
			countTot++;
		}
	}
	
	if(notPolindrome == 1 || isSmallPolindrome == 0){
		countTot += (l-countTot-countUnique);
	}
	
	printf("%d\n", countTot);
	return 0;
}

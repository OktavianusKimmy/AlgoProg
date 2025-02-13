#include <stdio.h>

int main(){
	int jmlDay, day[100];
	int jmlTeman, kepo1, kepo2;
	int count=0;
	scanf("%d", &jmlDay);
	for(int i = 0; i<jmlDay; i++){
		scanf("%d", &day[i]);
	}
	
	scanf("%d", &jmlTeman);
	for(int a = 1; a<=jmlTeman; a++){
		scanf("%d %d", &kepo1, &kepo2);
		int x = kepo1-1;
		while(x<kepo2){
			count = count + day[x];
			x++;
		}
		printf("Case #%d: %d\n", a, count);
		count = 0;
	}
	return 0;
}

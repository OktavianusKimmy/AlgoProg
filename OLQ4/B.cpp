#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i =1; i<=tc; i++){
		int hh, mm;
		char t1, t2;
		scanf("%d:%d %c%c", &hh, &mm, &t1, &t2);
		if(t1 == 'a'){
			if(hh == 12){
				hh = 0;
			}
			printf("Case #%d: %02d:%02d\n", i, hh, mm);
		}
		else if(t1 == 'p'){
			if(hh < 12){
				hh += 12;
			}
			printf("Case #%d: %02d:%02d\n", i, hh, mm);
		}
	}
	return 0;
}

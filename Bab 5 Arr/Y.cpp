#include <stdio.h>
#include <string.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int perubahan;
		char word[1002];
		scanf("%d %s", &perubahan, &word);
		int l = strlen(word);
		int from, to;
		for(int a = 1; a<=perubahan; a++){
			scanf("%d %d", &from, &to);
			char temp;
			if(from < to){
				int length = to - from;
				for(int b = 0; b<(length/2)+1; b++){
					temp = word[from-1];
					word[from-1] = word[to-1];
					word[to-1] = temp;
					from++;
					to--;
				}
			}
			else if(to < from){
				int length = from - to;
				for(int b = 0; b<=(length/2)+1; b++){
					temp = word[from-1];
					word[from-1] = word[to-1];
					word[to-1] = temp;
					from--;
					to++;
				}
			}
			
			
		}
		printf("Case #%d: %s\n", i, word);
	}
}

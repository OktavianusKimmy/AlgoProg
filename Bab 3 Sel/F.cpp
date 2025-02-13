#include <stdio.h>

int main(){
	int d, s, t;
	scanf("%d %d %d", &d, &s, &t);
	if(d>s && d>t && s>t){
		printf("Daging\nSayur\nTelur\n");
	}
	else if(d>t && d>s && t>s){
		printf("Daging\nTelur\nSayur\n");
	}
	else if(t>s && t>d && s>d){
		printf("Telur\nSayur\nDaging\n");
	}
	else if(t>d && t>s && d>s){
		printf("Telur\nDaging\nSayur\n");
	}
	else if(s>d && s>t && d>t){
		printf("Sayur\nDaging\nTelur\n");
	}
	else if(s>t && s>d && t>d){
		printf("Sayur\nTelur\nDaging\n");
	}
	return 0;
}
//d s t
//d t s
//t s d
//t d s
//s d t
//s t d

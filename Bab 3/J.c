#include <stdio.h>

int main(){
	long int a;
	long int b;
	long int c;
	
	scanf("%ld %ld %ld",&a,&b,&c);
	
	if(a<=c&&b>=c){
		if((c-a)==(b-c)){
		printf("%ld\n",c-a);
		}
	}else{
		printf("-1\n");
	}
}

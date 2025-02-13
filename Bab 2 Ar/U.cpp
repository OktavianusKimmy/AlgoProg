#include <stdio.h>

int main(){
	int t;
	double derajatDibuat, detikBerlalu;
	scanf("%d", &t);
	for(int i = 1; i<=t; i++){
		scanf("%lf %lf", &derajatDibuat, &detikBerlalu);
		double count = (derajatDibuat*detikBerlalu)/360;
		printf("%.2lf\n", count);
	}
	return 0;
}

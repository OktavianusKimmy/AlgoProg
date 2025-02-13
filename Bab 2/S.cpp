#include <stdio.h>

int main(){
	double pan, leb, ting;
	scanf("%lf %lf %lf", &pan, &leb, &ting);
	double sgt = leb * ting;
	double perpan = 3*leb*pan;
	printf("%.3lf\n", sgt+perpan);
	return 0;
}

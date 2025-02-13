#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 1; i<=tc; i++){
		int m, bulan;
		double interest;
		scanf("%d %lf %d", &m, &interest, &bulan);
		int ret = m;
		double x = ((interest/100)/12);
//		double y = (80/100);
		printf("Case #%d:", i);
		for(int a = 1; a<=bulan; a++){
			ret += (ret * x * 0.8);	
			printf("%d %d\n", a, ret);
		}
	}
	return 0;
}

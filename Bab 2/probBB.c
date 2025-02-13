#include <stdio.h>

int main(){
	float tugas, uts, uas;
	scanf("%f %f %f", &tugas, &uts, &uas);
	printf("%.2f\n", (0.2*tugas)+(0.3*uts)+(0.5*uas));
	return 0;
}

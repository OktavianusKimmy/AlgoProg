#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int t;
	fscanf(file, "%d\n", &t);
	for(int tc = 0; tc<=t; t++){
		int n;
		fscanf(file, "%d\n", &n);
		
		int sum = 0;
		int tower[101] = {0};
		
		for(int i = 0; i<n; i++){
			fscanf(file, "%d\n", &tower[i]);
			sum += (4 * tower[i]) + 2;
		}
		
		if(n == 1){
			sum -= (tower[0] * 2);
			printf("%d\n", sum);
		}
		else if(n == 2){
			int min = 0;
			if(tower[0] < tower[1]) min = tower[0];
			else min = tower[1];
			
		}
		
	}
}

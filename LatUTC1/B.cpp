#include <stdio.h>

int main(){
	int jmlMusik;
	double kesabaran;
	scanf("%d %lf", &jmlMusik, &kesabaran);
	kesabaran = kesabaran/100;
	int durasi[1002] = {0};
	for(int i = 0; i<jmlMusik; i++){
		scanf("%d", &durasi[i]);
	}
	
	double maks;
	int sumDur = 0;
	for(int i = 0; i<jmlMusik; i++){
		sumDur += durasi[i];
	}
	
	maks = double(sumDur) * kesabaran / jmlMusik;
	
	for(int i = 1; i<=jmlMusik; i++){
		if(durasi[i-1] > maks){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
	
}

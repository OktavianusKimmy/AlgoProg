#include <stdio.h>
#include <string.h>

struct Mahasiswa{
	char name[105];
	char pass[25];
};

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	Mahasiswa ppti[n+5];
	
	for(int i = 0; i<n; i++){
		fscanf(file, "%[^#]#%s\n", ppti[i].name, ppti[i].pass);
	}
	
	int x;
	fscanf(file, "%d\n", &x);
	char target[105];
	for(int i = 0; i<x; i++){
		fscanf(file, "%s\n", target);
		int len = strlen(target);
		for(int j = 0; j<len; j++){
			if(j % 2 == 0){
				target[j] = target[j] + (j+1);
			}
			else{
				target[j] = target[j] - (j+1);
			}
		}
		printf("Case #%d: ", i+1);
		int flag = 0;
		for(int j = 0; j<n; j++){
			if(strcmp(target, ppti[j].pass) == 0){
				printf("%s\n", ppti[j].name);
				flag =1;
			}
		}
		if(!flag){
			puts("Tidak terdaftar");
		}
	}
	fclose(file);
	return 0;
}

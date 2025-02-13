#include <stdio.h>
#include <string.h>

int countPerson = 0;

struct order{
	char nama[50];
	int ml;
};

int check(order arr[], char nama[], int ml){
	for(int i = 0; i<countPerson; i++){
		if(strcmp(arr[i].nama, nama) == 0){
			return i;
		}
	}
	return -1;
}

int main(){
	FILE *file = fopen("testcase.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	order ppti[n+2];
	char namaTemp[50];
	int mlTemp;
	
	for(int i = 0; i<n; i++){
		fscanf(file, "%[^#]#%d\n", namaTemp, &mlTemp);
		int idx = check(ppti, namaTemp, mlTemp);
		// else kalo udah ada namanya
		// -1 kalo belom ada namanya
		if(idx == -1){
			strcpy(ppti[countPerson].nama, namaTemp);
			ppti[countPerson].ml = mlTemp;
			countPerson++;
		}
		else{
			ppti[idx].ml += mlTemp;
		}
	}
	
	char find[50];
	fscanf(file, "%[^\n]\n", find);
	for(int i = 0; i<countPerson; i++){
		printf("%s - ", ppti[i].nama);
		if(ppti[i].ml <= 354) printf("53000\n");
		else if(ppti[i].ml <= 473) printf("57000\n");
		else if(ppti[i].ml <= 591) printf("60000\n");
		else printf("70000\n");
	}
	for(int i = 0; i<countPerson; i++){
		if(strcmp(ppti[i].nama, find) == 0){
			printf("%s - %d\n", ppti[i].nama, ppti[i].ml);
		}
	}
}

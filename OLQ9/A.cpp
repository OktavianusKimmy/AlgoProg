#include <stdio.h>
#include <string.h>

struct Mahasiswa{
	char name[55];
	int nilai;
};

void swap(Mahasiswa *a, Mahasiswa *b){
	Mahasiswa temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(Mahasiswa arr[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-1-i; j++){
			if(arr[j].nilai < arr[j+1].nilai){
				swap(&arr[j], &arr[j+1]);
			}
			else if(arr[j].nilai == arr[j+1].nilai){
				if(strcmp(arr[j].name, arr[j+1].name) > 0){
					swap(&arr[j], &arr[j+1]);
				}
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	for(int tc = 1; tc<=t; tc++){
		int n;
		scanf("%d", &n);
		Mahasiswa ppti[n+2];
		for(int i = 0; i<n; i++){
			scanf("%[^#]#%d", &ppti[i].name, &ppti[i].nilai);
		}
		bubbleSort(ppti, n);
		printf("Case #%d:", tc);
		for(int i = 0; i<n; i++){
			printf("%s - %d", ppti[i].name, ppti[i].nilai);
		}
		printf("\n");
	}
	
}

#include <stdio.h>
#include <string.h>

struct Plants{
	int num;
	char name[50];
}tanaman[1005];

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//int partition(Plants tanaman, int low, int high){
//	Plants pivot = tanaman[high].name;
//	int i = (low - 1);
//	
//	for(int j = low; j < high; j++){
//		if(strcmp(tanaman[j].name < pivot) > 0){
//			i++;
//			swap(&tanaman[i], &tanaman[j]);
//		}
//	}
//	swap(&tanaman[i+1], &tanaman[high]);
//	return (i+1);
//}
//
//void quicksort(Plants tanaman, int low, int high){
//	if(low < high){
//		int pi = partition(tanaman, low, high);
//		
//		quicksort(tanaman, low, pi-1);
//		quicksort(tanaman, pi+1, high);
//	}
//}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	fscanf(file, "%d\n", &n);
	for(int i = 0; i<n; i++){
		fscanf(file, "%d#%[^\n]\n", &tanaman[i].num, &tanaman[i].name);
	}
//	quicksort(Plants, n);
	for(int i = 0; i<n; i++){
		printf("%d %s\n", tanaman[i].num, tanaman[i].name);
	}
	return 0;
}

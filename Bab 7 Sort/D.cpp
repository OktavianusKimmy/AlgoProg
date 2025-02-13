#include <stdio.h>
#include <string.h>

struct Video{
	char judul[1005];
	char artis[1005];
	int view;
};

void swap(Video *a, Video *b){
	Video temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Video arr[], int low, int high){
	Video pivot = arr[high];
	int i = low -1;

	for(int j = low; j <= high - 1; j++){
		if(arr[j].view > pivot.view){
			i++;
			swap(&arr[j], &arr[i]);
		}
		else if(arr[j].view == pivot.view){
			if(strcmp(arr[j].judul, pivot.judul) < 0){
				i++;
				swap(&arr[j], &arr[i]);
			}
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Video arr[], int low, int high){
//	if(low >= high) return;
	
	if(low < high){
		int pi = partition(arr, low, high);
	
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	Video ppti[105];
	int i = 0;
	while(fscanf(file, "%[^#]#%[^#]#%d\n", ppti[i].judul, ppti[i].artis, &ppti[i].view) != EOF){
		i++;
	}
	quickSort(ppti, 0, i);
	for(int j = 0; j<i; j++){
		printf("%s by %s - %d\n", ppti[j].judul, ppti[j].artis, ppti[j].view);
	}
	fclose(file);
	return 0;
}

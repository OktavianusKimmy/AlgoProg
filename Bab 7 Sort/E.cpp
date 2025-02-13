#include <stdio.h>

struct Temper{
	char kota[1005];
	double value;
	char derajat;
	double celcnya;
};

void swap(Temper *a, Temper *b){
	Temper temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Temper arr[], int low, int high){
	Temper pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j].celcnya < pivot.celcnya){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Temper arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	FILE *file = fopen("testdata.in", "r");
	int i = 0;
	Temper ppti[105];
	while(!feof(file)){
		fscanf(file, "%[^#]#%lf#%c\n", ppti[i].kota, &ppti[i].value, &ppti[i].derajat);
		i++;
	}
	for(int j = 0; j<i; j++){
		if(ppti[j].derajat == 'F'){
			ppti[j].celcnya = ((ppti[j].value - 32.00) * 5)/9;
		}
		else{
			ppti[j].celcnya = ppti[j].value;
		}
//		printf("%s is %.2lf%c\n", ppti[j].kota, ppti[j].value, ppti[j].derajat);
	}
	quickSort(ppti, 0, i-1);
	for(int j = 0; j<i; j++){
		printf("%s is %.2lf%c\n", ppti[j].kota, ppti[j].value, ppti[j].derajat);
	}
}

#include <stdio.h>
#include <string.h>

struct MMR{
	int rating;
	char nama[100];
	char rank[10];
};

void swap(MMR *a, MMR *b){
	MMR temp = *a;
	*a = *b;
	*b = temp;
}

int partition(MMR arr[], int low, int high){
	MMR pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j].rating > pivot.rating){
			i++;
			swap(&arr[j], &arr[i]);
		}
		else if((arr[j].rating == pivot.rating) && (strcmp(arr[j].nama, pivot.nama) < 0)){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
	
}

void quickSort(MMR arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

void checkRank(MMR arr[], int high){
	for(int i = 0; i<=high; i++){
		if(arr[i].rating <= 200) strcpy(arr[i].rank, "Ascend");
		else if(arr[i].rating <= 350) strcpy(arr[i].rank, "Mortal");
		else if(arr[i].rating <= 500) strcpy(arr[i].rank, "Radial");
	}
}

int checkMean(MMR arr[], int high){
	int sum = 0;
	for(int i = 0; i<high; i++){
		sum += arr[i].rating;
	}
	return sum/high;
}

int main(){
	int n;
	scanf("%d", &n); getchar();
	MMR ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%d %s", &ppti[i].rating, ppti[i].nama);
	}
	quickSort(ppti, 0, n-1);
	checkRank(ppti, n-1);
	int rataRata = checkMean(ppti, n);
	for(int i = 0; i<n; i++){
		printf("%s %d %d %s\n", ppti[i].rank, ppti[i].rating, ppti[i].rating-rataRata, ppti[i].nama);
	}
}

/*
5
500 Darren
150 Felix
150 Ethan
50 Louis
150 Nice
*/


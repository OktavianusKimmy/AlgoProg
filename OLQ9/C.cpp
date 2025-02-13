#include <stdio.h>
#include <string.h>

struct Pasien{
	char nama[55];
	int urg;
};

void swap(Pasien *a, Pasien *b){
	Pasien temp = *a;
	*a = *b;
	*b = temp;
}

void merge(Pasien arr[], int l, int m, int r){
	int i, j, k;
	Pasien temp[r+2];
	i = l;
	j = m+1;
	k = l;
	while(i <= m && j <= r){
		if(arr[i].urg > arr[j].urg){
			temp[k] = arr[i];
			k++;
			i++;
		}
		else if(arr[i].urg == arr[j].urg){
			if(strcmp(arr[i].nama, arr[j].nama) < 0){
				temp[k] = arr[i];
				k++;
				i++;
			}
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while(i <= m){
		temp[k] = arr[i];
		i++;
		k++;
	}
	while(j <= r){
		temp[k] = arr[j];
		j++;
		k++;
	}
}

void mergeSort(Pasien arr[], int l, int r){
	if(l >= r) return;
	int m = l + ((r - l) / 2);
	
	mergeSort(arr, l, m);
	mergeSort(arr, m+1, r);
	merge(arr, l, m , r);
}

int partition(Pasien arr[], int low, int high){
	Pasien pivot = arr[high];
	int i = low -1;
	
	for(int j = low; j<=high-1; j++){
		if(arr[j].urg > pivot.urg){
			i++;
			swap(&arr[i], &arr[j]);
		}
		else if(arr[j].urg == pivot.urg){
			if(strcmp(arr[j].nama, pivot.nama) < 0){
				i++;
				swap(&arr[i], &arr[j]);
			}
		}
	}
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(Pasien arr[], int low, int high){
	if(low >= high) return;
	int pi = partition(arr, low, high);
	quickSort(arr, low, pi-1);
	quickSort(arr, pi+1, high);
}

int main(){
	int n;
	scanf("%d", &n);
	Pasien ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s %d", &ppti[i].nama, &ppti[i].urg);
	}
//	for(int i = 0; i<n; i++){
//		printf("%s %d\n", ppti[i].nama, ppti[i].urg);
//	}
//	mergeSort(ppti, 0, n-1);
	quickSort(ppti, 0, n-1);
	for(int i = 0; i<n; i++){
		printf("%s %d\n", ppti[i].nama, ppti[i].urg);
	}
}

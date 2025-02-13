#include <stdio.h>
#include <string.h>

struct Mahasiswa{
	char nim[11];
	char nama[20];
};

void swap(Mahasiswa *a, Mahasiswa *b){
	Mahasiswa temp = *a;
	*a = *b;
	*b = temp;
}

int partition(Mahasiswa mhs[], int low, int high){
	char *pivot;
	strcpy(pivot, mhs[high].nim);
	int i = (low - 1);
	
	for(int j = low; j < high; j++){
		if(strcmp(mhs[j].nim, pivot) < 0){
			i++;
			swap(&mhs[i], &mhs[j]);
		}
	}
	swap(&mhs[i+1], &mhs[high]);
	return i+1;
}

void quicksort(Mahasiswa *mhs, int low, int high){
	if(low < high){
		int pi = partition(mhs, low, high);
		
		quicksort(mhs, low, pi-1);
		quicksort(mhs, pi+1, high);
	}
}


int main(){
	FILE *file = fopen("testdata.in", "r");
	int n;
	Mahasiswa mhs[101];
	fscanf(file, "%d\n", &n);
	for(int i = 0; i<n; i++){
		fscanf(file, "%s %s\n", mhs[i].nim, mhs[i].nama);
	}
	quicksort(mhs, 0, n-1);
	for(int i = 0; i<n; i++){
		printf("%s %s\n", mhs[i].nim, mhs[i].nama);
	}
}

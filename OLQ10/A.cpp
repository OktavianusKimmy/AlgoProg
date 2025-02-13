#include <stdio.h>
#include <string.h>

struct Mahasiswa{
	char nama[255];
	int score;
	int idx;
};

int binarySearch(Mahasiswa arr[], int low, int high, char *target){
	if(low > high) return -1;
	int mid = (low + high)/2;
	
	if(strcmp(arr[mid].nama, target) == 0){
		return arr[mid].idx;
	}
	else if(strcmp(arr[mid].nama, target) > 0){
		return binarySearch(arr, low, mid-1, target);
	}
	else{
		return binarySearch(arr, mid+1, high, target);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	Mahasiswa ppti[n+2];
	for(int i = 0; i<n; i++){
		scanf("%s %d", ppti[i].nama, &ppti[i].score);
		ppti[i].idx = i;
	}
	int cari;
	scanf("%d", &cari);
	char orang1[255], orang2[255];
	for(int i = 0; i<cari; i++){
		scanf("%s %s", orang1, orang2);
		
		int idx1 = binarySearch(ppti, 0, n-1, orang1);
		int idx2 = binarySearch(ppti, 0, n-1, orang2);
		int s = ppti[idx1].score - ppti[idx2].score;
		
		if(idx1 == -1 || idx2 == -1){
			printf("not found\n");
		}
		else if(idx1 == idx2){
			printf("not valid\n");
		}
		else{
			if(s < 0) s *= -1;
			printf("%d ", s);
			
			int b = ppti[idx1].idx - ppti[idx2].idx;
			if(b < 0) b *= -1;
			printf("%d\n", b);
		}
	}
}

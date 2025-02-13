#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*

low = 0, high = 5
low = lokasi index pertama yang kita mau sorting, high = lokasi index terakhir yang mau kita sorting

i = low - 1
i = 0 - 1
i = -1, ada di sebelah kirinya lokasi index terkiri

4 3 6 7 9 2
pivot = angka[high]
pivot = 2
i 4 3 6 7 9 2
  j          
4 tidak <= 2, geser ke kanan, j++
  4 3 6 7 9 2
i   j       
3 tidak <= 2, j++
  4 3 6 7 9 2
i         j   

(swap diluar looping)
swap(i+1), pivot
4 kita tuker sama 2
2 3 6 7 9 4 -> awalnya
pivot = 4
2 3 6 7 9 4
  

index pivot = index angka 2 = 1
pivot = 4



*/



int pivot(int angka[], int start, int finish){
	int begin = start - 1;
	for(int i = start; i<finish; i++){
		if(angka[i] <= angka[finish]){
			begin++;
			swap(&angka[begin], &angka[i]);
		}
	}
	swap(&angka[begin+1], &angka[finish]);
	return begin + 1;
}

void sort(int angka[], int start, int finish){
	if (start < finish) {
		int piv = pivot(angka, start, finish); // == begin + 1
		sort(angka, start, piv - 1);
		sort(angka, piv + 1, finish);
	}	
}

int main(){
	int n;
	scanf("%d", &n);
	int angka[100];
	for(int i = 0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	sort(angka, 0, n - 1);
	for(int i = 0; i<n; i++){
		printf("%d ", angka[i]);
	}
	return 0;
}

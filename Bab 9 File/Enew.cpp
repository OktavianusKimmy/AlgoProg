#include <stdio.h>
#include <string.h>

int findKel(int box[], int n){
	int sum = 0;
	sum += (2*n); //dapet atas
	sum *= 2; // dapet bawah
	sum += (2*box[0]); // dapet sisi kiri
	sum += (2*box[n-1]); // dapet sisi kanan
	
	//cari sisi tengah
	for(int i = n-1; i>1; i--){
		int selisihKanan = box[i] - box[i-1];
		if(selisihKanan < 0) selisihKanan *= -1;
		sum += (2*selisihKanan);
	}
	
	for(int i = 0; i<n-2; i++){
		int selisihKiri = box[i] - box[i+1];
		if(selisihKiri < 0) selisihKiri *= -1;
		sum += (2*selisihKiri);
	}
	
	
	return sum;
}

int findLuas(int box[], int n){
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += box[i];
	}
	int calc = sum*4;
	return calc;
}

int main(){
	FILE *file;
	file = fopen("testdata.in", "r");
	int tc;
	fscanf(file, "%d\n", &tc);
	for(int t = 1; t<=tc; t++){
		int n;
		fscanf(file, "%d\n", &n);
		int box[n+2];
		int temp = 0;
		int keliling = 0;
		for(int i = 0; i<n; i++){
			fscanf(file, "%d\n", &box[i]);
			if(box[i] > temp){
				keliling += (4 * (box[i] - temp));
			}
			keliling += 4;
			temp = box[i];
		}
		int luas = findLuas(box, n);
		printf("Case #%d: %d %d\n", t, keliling, luas);
		
		
	}
}

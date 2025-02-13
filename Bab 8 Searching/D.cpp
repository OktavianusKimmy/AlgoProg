#include <stdio.h>
#include <string.h>

struct Mahasiswa{
	char nama[20];
	int nilai;
}mhs[1005];

void swap(Mahasiswa *a, Mahasiswa *b){
	Mahasiswa temp = *a;
	*a = *b;
	*b = temp;
}

void sort(Mahasiswa *mhs, int murid){
	for(int i = 0; i<murid-1; i++){
		for(int j = i+1; j<murid; j++){
			if(mhs[i].nilai < mhs[j].nilai) {
				swap(&mhs[i], &mhs[j]);
			} else if(mhs[i].nilai == mhs[j].nilai && strcmp(mhs[i].nama, mhs[j].nama) > 0){
				swap(&mhs[i], &mhs[j]);
			}
		}
	}
}

/*
2
3
Jojo#40
Lili#80
Bibi#90
Lili
3
Jojo#100
Lili#80
Bibi#90
Lili
*/

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int murid;
		scanf("%d", &murid); getchar();
		for(int a = 0; a<murid; a++){
			scanf("%[^#]#%d", &mhs[a].nama, &mhs[a].nilai); getchar();
		}
		sort(mhs, murid);
		
//		for(int a = 0; a<murid; a++){
//			printf("%s#%d\n", mhs[a].nama, mhs[a].nilai);
//		}
		
		char find[20]; int id;
		scanf("%[^\n]", find); getchar();
//		printf("pritt\n");
		for(int a = 0; a<murid; a++){
			if(strcmp(mhs[a].nama, find) == 0) {
				id = a; break;
			}
		}
		printf("Case #%d: %d\n", t, id+1);
	}
	return 0;
}

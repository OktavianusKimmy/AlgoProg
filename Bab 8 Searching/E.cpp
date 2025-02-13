#include <stdio.h>

int findMax(int mmr[10005], int n){
	int max = 0;
	for(int i = 0; i<n; i++){
		if(mmr[i] > max){
			max = mmr[i];
		}
	}
	return max;
}

int bawah(int max, int mmr[], int n){
	int maxTemp = 0;
	for(int i = 0; i<n; i++){
		if(mmr[i] > maxTemp && mmr[i] != max){
			maxTemp = mmr[i];
		}
	}
	return maxTemp;
}

int atas(int findMMR, int mmr[], int n){
	int temp[10000] = {0};
	for(int i = 0; i<n; i++){
		if(mmr[i] > findMMR){
			temp[i] = mmr[i];
		}
	}
	
	int min = 10000;
	for(int i = 0; i<n; i++){
		if(min > temp[i] && temp[i] != 0){
			min = temp[i];
		}
	}
	return min;
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n;
		scanf("%d", &n);
		int mmr[10005];
		for(int a = 0; a<n; a++){
			scanf("%d", &mmr[a]);
		}
		int findMMR;
		scanf("%d", &findMMR);
		
		printf("CASE #%d: ", t);
		//search
		int flag = 0;
		for(int i = 0; i<n; i++){
			if(mmr[i] == findMMR) flag = 1;
		}
		
		if(flag == 0){
			printf("-1 -1\n");
		}
		else{
			int max = findMax(mmr, n);
			if(max == findMMR){
				int dibawah = bawah(max, mmr, n);
				printf("%d %d\n", dibawah, findMMR);
			}
			else{
				int diatas = atas(findMMR, mmr, n);
				printf("%d %d\n", findMMR, diatas);
			}
		}
	}
	return 0;
}

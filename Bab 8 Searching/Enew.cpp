#include <stdio.h>
#include <string.h>

void swap(int *mmr1, int *mmr2){
	int temp = *mmr1;
	*mmr1 = *mmr2;
	*mmr2 = temp;
}

void sort(int mmr[], int n){
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n-1; j++){
			if(mmr[i] > mmr[j]){
				swap(&mmr[i], &mmr[j]);
			}
		}
	}
}

int main(){
	int tc;
	scanf("%d", &tc);
	for(int t = 1; t<=tc; t++){
		int n;
		scanf("%d", &n);
		int mmr[1005];
		for(int i = 0; i<n; i++){
			scanf("%d", &mmr[i]);
		}
		sort(mmr, n);
		int findMMR;
		scanf("%d", &findMMR);
		printf("CASE #%d: ", t);
		if(findMMR == mmr[n-1]) printf("%d %d\n", mmr[n-2], findMMR);
		else{
			int flag = 0;
			for(int i = 0; i<n; i++){
				if(findMMR == mmr[i]){
					printf("%d %d\n", findMMR, mmr[i+1]);
					flag = 1;
				}
			}
			if(flag == 0) printf("-1 -1\n");
		}
	}
}

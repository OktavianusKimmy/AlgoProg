#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int angka[1005];
	for(int i = 0; i<=1000; i++){
		angka[i] = 0;
	}
	for(int i = 1; i<=n; i++){
		int temp;
		scanf("%d", &temp);
		angka[temp] = temp;
	}
	
	for(int i = 1; i<=m; i++){
		int temp;
		scanf("%d", &temp);
		angka[temp] = 0;
	}
	
	int max = 0;
	int flag = 0;
	for(int i = 1; i<=1000; i++){
		if(angka[i] > max){
			max = angka[i];
			flag = 1;
		}
	}
	if(flag == 1){
		printf("Maximum number is %d\n", max);
	}
	else{
		printf("Maximum number is -1\n");
	}
	
	
}

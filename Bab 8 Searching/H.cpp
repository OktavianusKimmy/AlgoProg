#include <stdio.h>


void swap(long long *level1, long long *level2){
	long long temp = *level1;
	*level1 = *level2;
	*level2 = temp;
}

void sort(long long level[], int t){
	for(int i = 0; i<t; i++){
		for(int j = i+1; j<t-1; j++){
			if(level[i] > level[j]){
				swap(&level[i], &level[j]);
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	long long level[t+2] = {0};
	for(int a = 0; a<t; a++){
		scanf("%lld", &level[a]);
	}
	sort(level, t);
//	for(int a = 0; a<t; a++){
//		printf("%lld", level[a]);
//	}
	long long power;
	scanf("%lld", &power);
	int i = 0;
	int count = 0;
	while(power >= level[i] && i < t){
		power = power - level[i];
		i++;
//		printf("Count: %d, i : %d,  power : %d\n", count, i, power);
		count++;
	}
	printf("%d\n", count);
}

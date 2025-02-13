#include <stdio.h>

int cek(int Q, int A[], int start, int end, int flag){
	if(Q == A[start]){
		return start;
		flag = 1;
	}
	else if(start == end && flag == 0){
		return -1;
	}
	
	if(A[start] >= Q){
		int index = cek(Q, A, start/2, end, flag);
	}
	else{
		int index = cek(Q, A, 0, (start/2), flag);
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int A[n+3];
	for(int i = 1; i<=n; i++){
		scanf("%d", &A[i]);
	}
	
	
	for(int i = 1; i<=m; i++){
		int Q;
		scanf("%d", &Q);
		int flag = 0;
		if(A[n/2] >= Q){
			int index = cek(Q, A, n/2, n, flag);
			printf("%d\n", index);
		}
		else{
			int index = cek(Q, A, 0, (n/2), flag);
			printf("%d\n", index);
		}
		
	}
	
}

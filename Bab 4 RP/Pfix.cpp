#include <stdio.h>

int main(){
    int t, finish, lompatan = 0, finalLompat = 0;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        scanf("%d", &finish);
        while(lompatan <= finish){
            lompatan = lompatan + 1;
            finalLompat += 1+lompatan;
            if(finalLompat >= finish){
            	break;
			}
			printf("%d\n", finalLompat);
        }
        lompatan = 0;
        finalLompat = 0;
    }
    return 0;
}

/*
1 3 7

*/

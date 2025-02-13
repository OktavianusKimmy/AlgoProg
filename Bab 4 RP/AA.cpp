#include <stdio.h>

int main(){
    int jmlDadu, dadu, count = 0;
    scanf("%d", &jmlDadu);
    for(int i=1; i<=jmlDadu; i++){
        scanf("%d", &dadu);
		count += dadu;
		if(count == 9){
			count = 21;
		}
		else if(count == 33){
			count = 42;
		}
		else if(count == 76){
			count = 92;
		}
		else if(count == 53){
			count = 37;
		}
		else if(count == 80){
			count = 59;
		}
		else if(count == 97){
			count = 88;
		}
    }
    printf("%d\n", count);
    return 0;
}

// 9 21
// 33 42
// 76 92
// 53 37
// 80 59
// 97 88

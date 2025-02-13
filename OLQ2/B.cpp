#include <stdio.h>

int main(){
    char a[11];
    for(int i=1; i<=5; i++){
        scanf("%s", a);
        printf("%10s|%s\n", a, a);
    }
    return 0;
}
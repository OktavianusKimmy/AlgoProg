#include <stdio.h>

int main(){
    long long int a, b, nilai = 0;
    scanf("%lld %lld", &a, &b);
    for(long long int i=a; i<=b; i++){
        nilai += i;
    }
    printf("%lld\n", nilai);
    return 0;
}
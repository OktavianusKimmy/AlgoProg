#include <stdio.h>

int main(){
    int psy, mag, pure;
    scanf("%d %d %d", &psy, &mag, &pure);
    float count = (psy*0.2)+(mag*0.3)+(pure*0.5);
    printf("%.2f\n", count);
    return 0;
}

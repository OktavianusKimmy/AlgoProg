#include <stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float count1 = (0.2*a)+(0.3*b)+(0.5*c);
    printf("%.2f\n", count1);
    return 0;
}
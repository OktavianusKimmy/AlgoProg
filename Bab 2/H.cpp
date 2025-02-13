#include <stdio.h>

int main(){
    float a1, a2, a3, a4;
    float b1, b2, b3, b4;
    float c1, c2, c3, c4;
    scanf("%f %f %f %f", &a1, &a2, &a3, &a4);
    scanf("%f %f %f %f", &b1, &b2, &b3, &b4);
    scanf("%f %f %f %f", &c1, &c2, &c3, &c4);
    float count1 = (2*a1)+(2*a2)+(2*a3)+(a4);
    float count2 = (2*b1)+(2*b2)+(2*b3)+(b4);
    float count3 = (2*c1)+(2*c2)+(2*c3)+(c4);
    printf("%.2f\n", count1);
    printf("%.2f\n", count2);
    printf("%.2f\n", count3);
    return 0;
}
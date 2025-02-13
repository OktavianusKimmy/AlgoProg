#include <stdio.h>

int main(){
    char id[11], nama[101];
    char a;
    int b;

    scanf("%[^\n]\n", id);
    scanf("%[^\n]\n", nama);
    scanf("%c %d", &a, &b);
  
    printf("Id    : %s\n", id);
    printf("Name  : %s\n", nama);
    printf("Class : %c\n", a);
    printf("Num   : %d\n", b);
    return 0;
}

#include <stdio.h>

int main(){
    int d, s, t;
    scanf("%d %d %d", &d, &s, &t);

    if(d>s && s>t && d>t){
        printf("Daging\nSayur\nTelur\n");
    }
    else if(d>t && t>s && d>s){
        printf("Daging\nTelur\nSayur\n");
    }
    else if(s>d && d>t && s>t){
        printf("Sayur\nDaging\nTelur\n");
    }
    else if(s>t && t>d && s>d){
        printf("Sayur\nTelur\nDaging\n");
    }
    else if(t>d && d>s && t>s){
        printf("Telur\nDaging\nSayur\n");
    }
    else if(t>s && s>d && t>d){
        printf("Telur\nSayur\nDaging\n");
    }
    return 0;
}
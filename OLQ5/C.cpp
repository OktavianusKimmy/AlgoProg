#include <stdio.h>
#include <string.h>

int main(){
    int tc;
    scanf("%d", &tc);
    for(int t=0; t<tc; t++){
        char word[1002];
        scanf("%s", word);
        int l = strlen(word);
        int flag = 1;
        for(int i = 0, j = l-1; i<=j; i++, j--){
            if(word[i] != word[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            printf("Case #%d: no\n", t+1);
        }
        else{
            printf("Case #%d: yes\n", t+1);
        }
        
    }

    return 0;
}

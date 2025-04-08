#include <stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int count=1;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
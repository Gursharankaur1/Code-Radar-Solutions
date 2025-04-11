#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            continue;
        }
        printf("%c",str[i]);
    }
    return 0;
}
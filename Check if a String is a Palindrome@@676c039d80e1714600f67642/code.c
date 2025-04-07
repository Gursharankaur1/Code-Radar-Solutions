#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    int p=1;
    for(int i=0;i<l;i++){
        if(str[i]!=str[l-i-1]){
            p=0;
        }
    }
    if(p){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
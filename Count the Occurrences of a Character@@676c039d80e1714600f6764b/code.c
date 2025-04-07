#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    char a;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&a);
    int length=strlen(str);
    int count=0;
    for(int i=0;i<length;i++){
        if(str[i]==a){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    char a;
    char b;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&a);
    scanf("%c",&b);
    int length=strlen(str);
    for(int i=0;i<length;i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    printf("%s",str);
    return 0;
}
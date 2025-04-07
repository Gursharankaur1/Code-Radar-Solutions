#include<stdio.h>
#include<string.h>
int main(){
    char mystr[30];
    fgets(mystr,sizeof(mystr),stdin)
    int length = strlen(mystr);
    printf("%d",length);
    return 0;
}
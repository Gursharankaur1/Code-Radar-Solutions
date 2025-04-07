#include<stdio.h>
#include<string.h>
int main(){
    char mystr[30];
    int count=0;
    fgets(mystr,sizeof(mystr),stdin);
    int l=strlen(mystr);
    for(int i=0;i<l;i++){
            count+=1;
        }
    printf("%d",count);
    return 0;
    }

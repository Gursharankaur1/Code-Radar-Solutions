#include<stdio.h>
int main(){
    char mystr[30];
    int count=0;
    fgets(mystr,sizeof(mystr),stdin);
    for(int i=0;mystr[i]!='\0';i++){
            count+=1;
        }
    printf("%d",count);
    return 0;
    }

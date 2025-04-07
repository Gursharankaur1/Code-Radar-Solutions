#include<stdio.h>
int main(){
    char mystr[30];
    int count=0;
    fgets(mystr,sizeof(mystr),stdin);
    for(int i=0;mystr[i]!='\0';i++){
        if(mystr[i]=='a' || mystr[i]=='e' || mystr[i]=='i' || mystr[i]=='o' || mystr[i]=='u' || mystr[i]=='A' || mystr[i]=='E' || mystr[i]=='I' || mystr[i]=='O' \\ mystr[i]=='U'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
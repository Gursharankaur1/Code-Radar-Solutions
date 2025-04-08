#include<stdio.h>
#include<string.h>
int main(){
    char mystr[30];
    int count=0;
    fgets(mystr,sizeof(mystr),stdin);
    mystr[strcspn(mystr, "\n")] = '\0';
    int length=strlen(mystr);
    for(int i=0;i<length;i++){
        if(mystr[i]=='a' || mystr[i]=='e' || mystr[i]=='i' || mystr[i]=='o' || mystr[i]=='u' || mystr[i]=='A' || mystr[i]=='E' || mystr[i]=='I' || mystr[i]=='O' || mystr[i]=='U'){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
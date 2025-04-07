#include<stdio.h>
int main(){
char mystr[30];
char r;
fgets(mystr,sizeof(mystr),stdin);
scanf("%c",&r);
for(int i=0;mystr[i]!='\0';i++){
    if(mystr[i] == 'a' || mystr[i] == 'e' || mystr[i] == 'i' || mystr[i] == 'o' || mystr[i] == 'u' || mystr[i] == 'A' || mystr[i] == 'E' || mystr[i] == 'I' || mystr[i] == 'O' || mystr[i]=='U'){
        mystr[i]=r;
    }
}
printf("%s",mystr);
}
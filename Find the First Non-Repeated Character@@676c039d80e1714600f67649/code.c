#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int l=strlen(str);
    for(int i=0;i<l;i++){
        int found=0;
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                found+=1;
                break;
            }
        }
        if(found==0){
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}
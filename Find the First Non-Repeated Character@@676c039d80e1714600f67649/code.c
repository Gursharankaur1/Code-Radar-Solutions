#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int l=strlen(str);
    for(int i=0;i<l;i++){
        int found=1;
        for(int j=0;j<l;j++){
            if(str[i]==str[j] && i!=j){
                found=0;
                break;
            }
        }
        if(found==1){
            printf("%c",str[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}
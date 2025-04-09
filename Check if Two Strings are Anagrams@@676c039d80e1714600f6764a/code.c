#include<stdio.h>
#include<string.h>
int main(){
    char str1[30];
    char str2[30];
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int l1=strlen(str1);
    int l2=strlen(str2);
    for(int i=0;i<l1-1;i++){
        for(int j=0;j<l1-i-1;j++){
            if(str1[j]>str1[j+1]){
                char temp=str1[j];
                str1[j]=str1[j+1];
                str1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<l2-1;i++){
        for(int j=0;j<l2-i-1;j++){
            if(str2[j]>str2[j+1]){
                char temp=str2[j];
                str2[j]=str2[j+1];
                str2[j+1]=temp;
            }
        }
    }
    if(l1!=l2){
        printf("No");
        return 0;
    }
    else{
        for(int i=0;i<l1;i++){
            if(str1[i]!=str2[i]){
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}
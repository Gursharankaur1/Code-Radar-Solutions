#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int isinc=1;
    int isdec=1;
    for(int i=0;i<n-1;i++){
        if(array[i]>array[i+1]){
            isinc=0;
        }
        if(array[i]<array[i+1]){
            isdec=0;
        }
    }
    if(isdec||isinc){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
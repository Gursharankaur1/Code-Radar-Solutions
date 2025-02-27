#include <stdio.h>
int main(){
    int n;
    int k=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int j=0;j<n-1;j++){
        if(array[j]<array[j+1] && array[j+2]<array[j+1]){
            k=array[j+1];
            break;
        }
    }
    if(k){
        printf("%d",k);
    }
    else{
        if(array[0]>array[1]){
            printf("%d",array[0]);
        }
        else if(array[n-1]>array[n-2]){
            printf("%d",array[n-1]);
        }
        else{
            printf("%d",-1);
        }
    }
    return 0;
}
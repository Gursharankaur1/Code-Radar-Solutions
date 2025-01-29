#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    if(n<2){
        printf("%d",-1);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int min=0;
    for(int j=0;j<n;j++){
        if(array[j]>max){
            max=array[j];
        }
    }
    for(int k=0;k<n;k++){
        if(array[k]>min && array[k]<max){
            min=array[k];
        }
    }
    if(max!=min){
    printf("%d",min);}
    else{
        printf("%d",-1);
    }
    return 0;
}
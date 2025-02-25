#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int min1=INT_MAX, min2=INT_MAX;
    for(int j=0;j<n;j++){
        if(array[j]<min1){
            min2=min1;
            min1=array[j];
        }
        else if(array[j]<min2){
            min2=array[j];
        }
    }
    if(min1==min2){
        printf("%d",-1);
    }
    else if(n==1){
        printf("%d",-1);
    }
    else{
        printf("%d",min2);
    }
    return 0;
}
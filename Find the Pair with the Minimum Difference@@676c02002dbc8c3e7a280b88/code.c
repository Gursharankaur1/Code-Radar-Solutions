#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
        return 0;
    }
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int diff=abs(array[0]-array[1]);
    int a=array[0],b=array[1];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(array[i]-array[j])<diff){
                diff=abs(array[i]-array[j]);
                a=array[i];
                b=array[j];
            }
        }
    }
printf("%d %d",b,a);
    return 0;
}
#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
        int diff=abs(array[0]-array[1]);
        int a=array[0],b=array[1];
        for(int j=i+1;j<n;j++){
            if(abs(array[i]-array[j])<diff){
                diff=abs(array[i]-array[j]);
                a=array[i];
                b=array[j];
            }
        }
    }
    if(a>b){
        printf("%d %d",b,a);
    }
    else{
        printf("%d %d",a,b);
    }
    return 0;
}
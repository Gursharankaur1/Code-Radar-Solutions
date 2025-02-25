#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max1=INT_MIN, max2=INT_MIN;
    for(int j=0;j<n;j++){
        if(array[j]>max1){
            max2=max1;
            max=array[j];
        }
        else if(array[j]>max2){
            max2=array[j];
        }
    }
    printf("%d",max2);
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
   for(int i=0;i<n-1;i++){
    int max=array[i+1];
    for(int j=i+1;j<n;j++){
        if(array[j]>max){
            max=array[j];
        }
    }
    array[i]=max;
   }
    array[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
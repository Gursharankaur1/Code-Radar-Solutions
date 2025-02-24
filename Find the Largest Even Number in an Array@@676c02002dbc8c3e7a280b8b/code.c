#include <stdio.h>
int main(){
    int n;
    int even=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int j=0;j<n;j++){
        if(array[j]%2==0){
            even=array[j];
        }
    }
    for(int j=0;j<n;j++){
        if(array[j]%2==0 && array[j]>even){
           even=array[j];
        }
    }
    if(even){
        printf("%d",even);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}
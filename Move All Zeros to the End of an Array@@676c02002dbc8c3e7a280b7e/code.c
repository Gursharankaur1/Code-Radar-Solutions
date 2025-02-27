#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int j=0;j<n;j++){
        if(array[j]==0){
            count+=1;
        }
    }
    if(count==0){
        for(int i=0;i<n;i++){
            printf("%d ",array[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(array[i]==0){
                continue;
            }
            printf("%d ",array[i]);
        }
        for(int i=0;i<count;i++){
            printf("%d ",0);
        }
    }
   
    return 0;
}
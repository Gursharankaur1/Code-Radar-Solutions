#include <stdio.h>
int main(){
    int n,k=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                k=array[i];
                return 0;
            }
        }
        
    }
    if(k){
        printf("%d",k);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}
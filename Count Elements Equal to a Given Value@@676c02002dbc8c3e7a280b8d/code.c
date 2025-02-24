#include <stdio.h>
int main(){
    int n,k;
    int count=0;
    scanf("%d %d",&n,&k);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int j=0;j<n;j++){
        if(array[j]==k){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
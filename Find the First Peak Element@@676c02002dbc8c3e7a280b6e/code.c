#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int j=0;j<n-1;j++){
        if(array[j-1]<array[j] && array[j+1]<array[j]){
            printf("%d",array[j]);
            break;
        }
    }
    return 0;
}
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
        else if(array[0]>array[1]){
            printf("%d",array[0]);
            break;
        }
        else if(array[n-1]>array[n-2]){
            printf("%d",array[n-1]);
            break;
        }
    }
   
    return 0;
}
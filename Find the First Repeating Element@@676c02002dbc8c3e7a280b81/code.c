#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
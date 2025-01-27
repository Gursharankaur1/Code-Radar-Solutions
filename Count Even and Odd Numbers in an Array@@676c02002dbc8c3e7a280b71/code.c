#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int e=0;
    int o=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    printf("%d %d",e,o);
    return 0;
}
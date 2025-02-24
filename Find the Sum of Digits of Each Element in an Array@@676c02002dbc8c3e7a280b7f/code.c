void sum(int arr[],int n){
    int array[n];
    for(int i=0;i<n;i++){
        int sum=0;
        while(arr[i]>0){
            int r=arr[i]%10;
            sum+=r;
            arr[i]=arr[i]/10;
        }
        array[i]=sum;
    }
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,n);
    return 0;
}
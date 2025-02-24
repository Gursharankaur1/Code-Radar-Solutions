#include <stdio.h>
void sum(int arr[],int n){
    int array[n];
    for(int i=0;i<n;i++){
        int sum=0;
        int temp=arr[i];
        if(temp<0){temp=-temp;}
        while(temp!=0){
            int r=temp%10;
            sum+=r;
            temp=temp/10;
        }
        array[i]=sum;
    }
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
}
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
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num=0;
    for(int j=0;j<n;j++){
        int count=0;
        int temp=arr[j];
        for(int k=1;k<=temp;k++){
            if(temp%k==0){
                count+=1;
            }
        }
        if(count==2){
            num+=1;
        }
    }
    printf("%d",num);
    return 0;
}
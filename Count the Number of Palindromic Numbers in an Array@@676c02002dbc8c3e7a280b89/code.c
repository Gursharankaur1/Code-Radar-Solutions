#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count=0;
    for(int j=0;j<n;j++){
        int temp=array[j];
        int rev=0;
        while(array[j]>0){
            int r=array[j]%10;
            rev=(rev*10)+r;
            array[j]=array[j]/10;
        }
        if(rev==temp){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
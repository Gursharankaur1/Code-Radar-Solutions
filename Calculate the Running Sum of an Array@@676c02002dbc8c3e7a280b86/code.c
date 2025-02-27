#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=array[i];
        printf("%d ",s);
    }
    return 0;
}
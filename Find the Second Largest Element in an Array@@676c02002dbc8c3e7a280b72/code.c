#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    if(n<2){
        printf("%d",-1);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0];
    int second_max=-1;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            second_max=max;
            max=array[i];
        }
        else if(array[i]>second_max && array[i]<max){
            second_max=array[i];
        }
    }
    if(second_max==-1){
        printf("%d",-1);
    }
    else{printf("%d",second_max);}
    return 0;
}
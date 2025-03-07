#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int t;
    scanf("%d",&t);
    int same;
    for(int i=0;i<n;i++){
        if(array[i]!=array[j]){
            same=0;
        }
    }
    if(same){
        if(array[0]+array[1]==t){
            printf("%d %d\n",array[0],array[1]);
        }
    }
    else{
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(array[j]+array[k]==t){
                printf("%d %d\n",array[j],array[k]);
            }
        }
    }}
    return 0;
}
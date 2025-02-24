#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int t,temp=-1;
    scanf("%d",&t);
    for(int j=0;j<n;j++){
        if(array[j]==t){
            temp=j;
            break;
        }
    }
    if(temp!=-1){
        printf("%d",temp);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}
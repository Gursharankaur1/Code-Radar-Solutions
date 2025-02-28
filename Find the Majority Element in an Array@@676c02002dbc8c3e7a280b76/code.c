#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
         int count=0;
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count+=1;
            }
        }
        if(count>(n/2)){
            printf("%d",count);
            return 0;
        }
    }
        printf("%d",-1);
        return 0;
    
    
}
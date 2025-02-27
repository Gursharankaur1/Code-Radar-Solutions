#include <stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int array[n];
        for(int i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        int k;
        scanf("%d",&k);
        for(int j=n-k;j<n;j++){
            printf("%d\n",array[j]);
        }
        for(int z=0;z<=n-k-1;z++){
            printf("%d\n",array[z]);
        }
        return 0;
    }
   

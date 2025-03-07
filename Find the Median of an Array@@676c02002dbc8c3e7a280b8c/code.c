#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (array[j] > array[j + 1]) { 
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    if(n%2==0){
        int e=n/2;
        int avg=(array[e-1]+array[e])/2;
        printf("%d",avg);
    }
    else{
        int e=n/2;
        printf("%d",array[e]);
    }
    return 0;
}
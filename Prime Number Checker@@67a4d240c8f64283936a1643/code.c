int isPrime(num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
           count+=1; 
        }
    }
    if(count==2){return 1;}
    else{return 0;}
}
#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
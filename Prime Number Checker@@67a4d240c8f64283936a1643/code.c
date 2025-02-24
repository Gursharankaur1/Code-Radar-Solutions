void isPrime(num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==2){
           count+=1; 
        }
    }
    if(count==2){printf("%d\n",1);}
    else{printf("%d\n",0);}
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
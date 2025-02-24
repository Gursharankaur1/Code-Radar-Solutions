#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int num;
        int count=0;
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
            if(num%i==0){
                count+=1;
            }
        }
        if(count==2){
            printf("%d\n",1);
            }
        else{
            printf("%d\n",0);
            }
    }
    return 0;
}
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("%s","Divisible by Both");
    }
    else if(n%3==0){
        printf("%s","Divisible by 3");
    }
    else if(n%5==0){
        printf("%s","Divisible by 5");
    }
    else{
        printf("%s","Not Divisible");
    }
    return 0;
}
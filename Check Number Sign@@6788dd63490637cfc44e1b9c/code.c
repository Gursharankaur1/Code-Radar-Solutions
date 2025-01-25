#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("%s","Positive");
    }
    if(n<0){
        printf("%s","Negative");
    }
    if(n==0){
        printf("%s","Zero");
    }
    return 0;
}
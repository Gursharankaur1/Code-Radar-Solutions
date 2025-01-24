#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("%s","Positive");
    }
    else if(a<0){
        printf("%s","Negative");
    }
    else{
        printf("%s","Zero");
    }
    return 0;
}
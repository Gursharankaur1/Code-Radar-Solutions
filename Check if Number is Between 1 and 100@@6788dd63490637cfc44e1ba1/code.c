#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100){
        printf("%s","In Range");
    }
    else{
        printf("%s","Out of Range");
    }
    return 0;
}
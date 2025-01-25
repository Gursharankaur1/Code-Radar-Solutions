#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("%s","Freezing");
    }
    else{
        printf("%s","Above Freezing");
    }
    return 0;
}
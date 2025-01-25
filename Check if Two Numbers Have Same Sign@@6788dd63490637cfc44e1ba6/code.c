#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>0 && b>0) || (a<0 && b<0)){
        printf("%s","Same Sign");
    }
    if((a>0 && b<0) || (a<0 && b>0)){
        printf("%s","Different Sign");
    }
    return 0;
}
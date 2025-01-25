#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(b*b==a){
        printf("%s","Yes");
    }
    else{
        printf("%s","No");
    }
    return 0;
}
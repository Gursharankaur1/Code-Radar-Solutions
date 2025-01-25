#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0){
        printf("%s","Yes");
    }
    else{
        printf("%s","No");
    }
    return 0;
}
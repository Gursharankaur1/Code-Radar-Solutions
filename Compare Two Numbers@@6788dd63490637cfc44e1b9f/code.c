#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("%s","Equal");
    }
    else{
        if(a>b){
            printf("%s","First");
        }
        else{
            printf("%s","Second");
        }
    }
    return 0;
}
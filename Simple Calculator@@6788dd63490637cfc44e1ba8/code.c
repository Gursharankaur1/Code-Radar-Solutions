#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        if(b==0){
            printf("%s","Error");
        }
        else{
        printf("%d",a/b);}
    }
    else{
        printf("%s","error");
    }
    return 0;
}
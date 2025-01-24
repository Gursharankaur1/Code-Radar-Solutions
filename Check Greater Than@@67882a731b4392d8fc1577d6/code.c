#include <stdio.h>
int main() {
    int a,b;
    char x[4]="True";
    char y[5]="False";
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%s",x);
    }
    else{
        printf("%s",y);
    }
    return 0;
}
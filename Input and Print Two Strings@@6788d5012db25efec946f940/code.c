#include <stdio.h>
int main() {
    char x[100];
    char y[100];
    scanf("%[^\n]s",x);
    scanf("%[^\n]s",y);
    printf("You entered: %s and \n%s",x,y);
    return 0;
}
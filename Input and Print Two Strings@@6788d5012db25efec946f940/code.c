#include <stdio.h>
int main() {
    char x[100];
    char y[100];
    fgets(x,sizeof(x),stdin);
    fgets(y,sizeof(y),stdin);
    printf("You entered: %s and\n%s",x,y);
    return 0;
}
#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float avg=(float)(x+y+z)/3;
    printf("You entered: %.2f",avg);
    return 0;
}
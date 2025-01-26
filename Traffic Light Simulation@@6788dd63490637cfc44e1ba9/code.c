#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c=='R'){
        printf("%s","Stop");
    }
    else if(c=='G'){
        printf("%s","Go");
    }
    else if(c=='Y'){
        printf("%s","Slow Down");
    }
    else{
        printf("%s","Invalid input");
    }
    return 0;
}
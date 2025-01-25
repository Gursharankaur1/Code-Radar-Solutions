#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z'){
        printf("%s","Uppercase");
    }
    else if(x>='a' && x<='z'){
        printf("%s","Lowercase");
    }
    else{
        printf("%s","Not an alphabet");
    }
    return 0;
}
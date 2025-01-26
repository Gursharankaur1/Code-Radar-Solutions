#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    if(x=='A'){
        printf("%s","Excellent");
    }
    else if(x=='B'){
        printf("%s","Good");
    }
    else if(x=='C'){
        printf("%s","Average");
    }
    else if(x=='D'){
        printf("%s","Below Average");
    }
    else if(x=='F'){
        printf("%s","Fail");
    }
    else{
        printf("%s","Invalid grade");
    }
    return 0;
}
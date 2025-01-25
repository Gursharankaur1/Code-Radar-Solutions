#include <stdio.h>
int main() {
    int age;
    scanf("%s",&age);
    if(age<18){
        printf("%s","Not Eligible");
    }
    else{
        printf("%s","Eligible");
    }
    return 0;
}
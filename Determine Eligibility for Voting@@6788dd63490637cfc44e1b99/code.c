#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age<18){
        printf("%s","Not Eligible");
    }
    else{
        printf("%s","Eligible");
    }
    return 0;
}
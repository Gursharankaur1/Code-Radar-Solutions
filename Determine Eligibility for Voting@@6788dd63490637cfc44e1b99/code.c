#include <stdio.h>
int main() {
    int age;
    scanf("%s",&age);
    if(age>=18){
        printf("%s","Eligible");
    }
    else{
        printf("%s","Not Eligible");
    }
    return 0;
}
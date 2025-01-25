#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age>=60){
        printf("%s","Eligible");
    }
    else{
        printf("%s","Not Eligible");
    }
    return 0;
}
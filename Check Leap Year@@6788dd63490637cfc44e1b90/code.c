#include <stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    if(year%4==0 && year!=100 ||(year%400==0)){
        printf("%s","Leap Year");
    }
    else{
        printf("%s","Not a Leap Year");
    }
    return 0;
}
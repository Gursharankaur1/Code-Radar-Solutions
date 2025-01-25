#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("%c",'A');
    }
    else if(marks<90 && marks>=80){
        printf("%c",'B');
    }
    else if(marks<80 && marks>=70){
        printf("%c",'C');
    }
    else if(marks<70 && marks>=60){
        printf("%c",'D');
    }
    else{
        printf("%c",'F');
    }
    return 0;
}
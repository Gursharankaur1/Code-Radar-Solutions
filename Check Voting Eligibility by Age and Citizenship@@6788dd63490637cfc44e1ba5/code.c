#include <stdio.h>
int main() {
    int age,status;
    scanf("%d %d",&age,&status);
    if(age>=18 && status==1){
        printf("%s","Eligible");
    }
    else{
        printf("%s","Not Eligible");
    }
    return 0;
}
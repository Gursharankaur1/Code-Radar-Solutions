#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){printf("%s","Monday");}
    else if(n==2){printf("%s","Tuesday");}
    else if(n==3){printf("%s","Wednesday");}
    else if(n==4){printf("%s","Thursday");}
    else if(n==5){printf("%s","Friday");}
    else if(n==6){printf("%s","Saturday");}
    else{printf("%s","Sunday");}
    
    return 0;
}
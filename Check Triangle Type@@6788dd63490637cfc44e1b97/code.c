#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); 
    if(a==b && b==c && a==c){
        printf("%s","Equilateral");
    } 
    else if((a==b a!=c) || (a==c && b!=c) || (b==c && a!=b)){
        printf("%s","Isosceles");
    }
    else{
        printf("%s","Scalene");
    }  
    return 0;
}
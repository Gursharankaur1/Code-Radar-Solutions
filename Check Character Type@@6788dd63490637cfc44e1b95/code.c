#include <stdio.h>
#include <ctype.h>
int main() {
    char x;
    scanf("%c",&x); 
    if(isdigit(x)){
        printf("%s","Digit");
    }
    else if(isalpha(x)){
        if(x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u'|| x=='A'|| x=='E'|| x=='I'|| x=='O'|| x=='U'){
            printf("%s","Vowel");
        }
        else{
            printf("%s","Consonant");
        }
    }
    else{
        printf("%s","Special Character");
    }
    return 0;
}
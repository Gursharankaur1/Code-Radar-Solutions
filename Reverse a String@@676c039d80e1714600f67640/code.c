#include <stdio.h>
#include <string.h>
int main() {
    char mystr[30];
    fgets(mystr, sizeof(mystr), stdin);
    
    int len = strlen(mystr);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", mystr[i]);
    }
    return 0;
}
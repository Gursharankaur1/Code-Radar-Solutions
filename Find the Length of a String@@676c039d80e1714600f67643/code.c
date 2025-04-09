#include <stdio.h>
#include <string.h>
int main() {
    char mystr[30];
    fgets(mystr, sizeof(mystr), stdin);
    if (mystr[0] == ' ') {
        printf("0");
    } else {
        int length = strlen(mystr);
        printf("%d", length);
    }
    return 0;
}

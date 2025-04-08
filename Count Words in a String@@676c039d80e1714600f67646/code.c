#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    int in_word = 0;
    fgets(str, 100, stdin); 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

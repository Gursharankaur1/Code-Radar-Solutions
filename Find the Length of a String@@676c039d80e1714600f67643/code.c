#include <stdio.h>
#include <string.h>
int main() {
    char mystr[30];
    fgets(mystr, sizeof(mystr), stdin);
    int size=0;
    for(int i=0;mystr[i]!='\0';i++){
            size++;
        }
    
    printf("%d",size);
    return 0;
}

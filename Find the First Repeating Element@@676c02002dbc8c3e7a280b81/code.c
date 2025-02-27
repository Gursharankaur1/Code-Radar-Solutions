#include <stdio.h>

int main() {
    int n;
    int found = 0;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[i] == array[j]) {
                printf("%d\n", array[i]);
                found = 1;
                break;
            }
        }
        if(found) {
            break;
        }
    }
    
    if(!found) {
        printf("%d\n", -1);
    }
    
    return 0;
}

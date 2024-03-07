#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'p' || ch == 'e' || ch == 'a' || ch == 'k') {
        printf("this is peak value\n");
    } else {
        printf("input mismatch\n");
    }

    return 0;
}

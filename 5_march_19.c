#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' ||
        ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p') {
        printf("upper line\n");
    } else {
        printf("input mismatch\n");
    }

    return 0;
}

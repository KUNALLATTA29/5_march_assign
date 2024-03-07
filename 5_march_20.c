#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' ||
        ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l') {
        printf("mid line\n");
    } else {
        printf("input mismatch\n");
    }

    return 0;
}

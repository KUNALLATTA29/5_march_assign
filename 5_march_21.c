#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'z' || ch == 'x' || ch == 'c' || ch == 'v' || ch == 'b' ||
        ch == 'n' || ch == 'm') {
        printf("lower line\n");
    } else {
        printf("input mismatch\n");
    }

    return 0;
}

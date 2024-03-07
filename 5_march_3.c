#include <stdio.h>

int main() {
    char alpha;
    int num1, num2;
    
    printf("Enter 's' for subtraction: ");
    scanf(" %c", &alpha);

    if (alpha == 's') {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Result: %d\n", num1 - num2);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}

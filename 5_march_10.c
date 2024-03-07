#include <stdio.h>

int main() {
    char alpha;
    int num1, num2;
    
    printf("Enter 'm' for multiplication: ");
    scanf(" %c", &alpha);

    if (alpha == 'm') {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Product: %d\n", num1 * num2);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}

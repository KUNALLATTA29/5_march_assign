#include <stdio.h>

int main() {
    char alpha;
    int num1, num2;
    
    printf("Enter 'p' for modulus operation: ");
    scanf(" %c", &alpha);

    if (alpha == 'p') {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Modulus: %d\n", num1 % num2);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    char alpha;
    int num1, num2;
    
    printf("Enter 'a' for addition: ");
    scanf(" %c", &alpha);

    if (alpha == 'a') {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Result: %d\n", num1 + num2);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    char alpha;
    int num1, num2;
    
    printf("Enter 'd' for division: ");
    scanf(" %c", &alpha);

    if (alpha == 'd') {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("result: %d\n", num1 / num2);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}

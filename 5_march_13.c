#include <stdio.h>
int main() {
    char alpha;
    printf("Enter 's' to swap two numbers without using a third variable: ");
    scanf(" %c", &alpha);
    
    if(alpha == 's') {
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        
        printf("Before swapping: a = %d, b = %d\n", a, b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After swapping: a = %d, b = %d\n", a, b);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}


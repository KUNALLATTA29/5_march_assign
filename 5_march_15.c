#include <stdio.h>
int main() {
    char alpha;
    printf("Enter 'w' to swap two numbers using a third variable: ");
    scanf(" %c", &alpha);
    
    if(alpha == 'w') {
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        
        printf("Before swapping: a = %d, b = %d\n", a, b);
        int c;
        c=a;
        a=b;
        b=c;
        printf("After swapping: a = %d, b = %d\n", a, b);
    } else {
        printf("Input mismatch.\n");
    }

    return 0;
}
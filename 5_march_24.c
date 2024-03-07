#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 11 == 0 && num % 5 == 0) {
        printf("This number is divisible by both 11 and 5\n");
    } else {
        printf("This number is not divisible by both 11 and 5\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 9 == 0) {
        printf("This number is divisible by both 5 and 9\n");
    } else {
        printf("This number is not divisible by both 5 and 9\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 12 == 0 && num % 7 == 0 && num % 5 ==0) {
        printf("This number is divisible\n");
    } else {
        printf("This number is not divisible\n");
    }

    return 0;
}

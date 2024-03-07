#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 6 ==0) {
        printf("This number is divisible\n");
    } else {
        printf("This number is not divisible\n");
    }

    return 0;
}

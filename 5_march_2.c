#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 78){
        printf("%d is greater than 78.\n", number);
    } else {
        printf("%d is not greater than 78.\n", number);
    }
    return 0;
}

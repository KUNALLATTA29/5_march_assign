#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("%d is greater than %d.\n", num1, num2);
    } else {
        printf("%d is greater than %d.\n", num2, num1);
    }
    return 0;
}

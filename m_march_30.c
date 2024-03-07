#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 5698) {
        printf("The number is greater than 5698.\n");
    } else {
        printf("The number is not greater than 5698.\n");
    }

    return 0;
}

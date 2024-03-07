#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number between 509 to 809: ");
    scanf("%d", &num);

    if (num >= 167 && num <= 289) {
        printf("This number is between 167 to 289\n");
    } else {
        printf("Input mismatch\n");
    }

    return 0;
}
